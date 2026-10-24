#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_001fc354
// Address: 0x1fc354 - 0x1fc3d8
void entry_001fc354_0x1fc354(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fc354_0x1fc354");
#endif

    switch (ctx->pc) {
        case 0x1fc37cu: goto label_1fc37c;
        case 0x1fc3acu: goto label_1fc3ac;
        default: break;
    }

    ctx->pc = 0x1fc354u;

    // 0x1fc354: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1fc354u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fc358: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc35c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1fc35cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc360: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x1fc360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1fc364: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1fc364u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1fc368: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc36c: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x1fc36cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc370: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1fc370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1fc374: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1FC374u;
    SET_GPR_U32(ctx, 31, 0x1FC37Cu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1FC374u, 0x1FC37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC37Cu;
label_1fc37c:
    // 0x1fc37c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc380: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fc380u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fc384: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fc384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fc388: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1fc388u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1fc38c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc390: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1fc390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc394: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1fc394u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fc398: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc39c: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x1fc39cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc3a0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1fc3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1fc3a4: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1FC3A4u;
    SET_GPR_U32(ctx, 31, 0x1FC3ACu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1FC3A4u, 0x1FC3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC3ACu;
label_1fc3ac:
    // 0x1fc3ac: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc3b0: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fc3b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fc3b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fc3b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fc3b8: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1fc3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1fc3bc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FC3BCu;
    {
        const bool branch_taken_0x1fc3bc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1fc3bc) {
            ctx->pc = 0x1FC3D8u;
            return;
        }
    }
    ctx->pc = 0x1FC3C4u;
    // 0x1fc3c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fc3c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fc3c8: 0x0  nop
    ctx->pc = 0x1fc3c8u;
    // NOP
    // 0x1fc3cc: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1fc3ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1fc3d0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FC3D0u;
    {
        const bool branch_taken_0x1fc3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc3d0) {
            ctx->pc = 0x1FC3F4u;
            return;
        }
    }
    ctx->pc = 0x1FC3D8u;
}
