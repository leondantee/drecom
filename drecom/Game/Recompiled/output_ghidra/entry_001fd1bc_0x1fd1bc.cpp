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

// Function: entry_001fd1bc
// Address: 0x1fd1bc - 0x1fd258
void entry_001fd1bc_0x1fd1bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd1bc_0x1fd1bc");
#endif

    switch (ctx->pc) {
        case 0x1fd1d4u: goto label_1fd1d4;
        case 0x1fd1fcu: goto label_1fd1fc;
        case 0x1fd22cu: goto label_1fd22c;
        default: break;
    }

    ctx->pc = 0x1fd1bcu;

    // 0x1fd1bc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1fd1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fd1c0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1fd1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1fd1c4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1fd1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1fd1c8: 0x24460140  addiu       $a2, $v0, 0x140
    ctx->pc = 0x1fd1c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    // 0x1fd1cc: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1FD1CCu;
    SET_GPR_U32(ctx, 31, 0x1FD1D4u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1FD1CCu, 0x1FD1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD1D4u;
label_1fd1d4:
    // 0x1fd1d4: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1fd1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fd1d8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1fd1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fd1dc: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1fd1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fd1e0: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x1fd1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1fd1e4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1fd1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1fd1e8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1fd1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fd1ec: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x1fd1ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fd1f0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1fd1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1fd1f4: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1FD1F4u;
    SET_GPR_U32(ctx, 31, 0x1FD1FCu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1FD1F4u, 0x1FD1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD1FCu;
label_1fd1fc:
    // 0x1fd1fc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1fd1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fd200: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fd200u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fd204: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fd204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fd208: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1fd208u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1fd20c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1fd20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fd210: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1fd210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fd214: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1fd214u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fd218: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1fd218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fd21c: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x1fd21cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fd220: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1fd220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1fd224: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1FD224u;
    SET_GPR_U32(ctx, 31, 0x1FD22Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1FD224u, 0x1FD22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD22Cu;
label_1fd22c:
    // 0x1fd22c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1fd22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fd230: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fd230u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fd234: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fd234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fd238: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1fd238u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1fd23c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FD23Cu;
    {
        const bool branch_taken_0x1fd23c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1fd23c) {
            ctx->pc = 0x1FD258u;
            return;
        }
    }
    ctx->pc = 0x1FD244u;
    // 0x1fd244: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fd244u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fd248: 0x0  nop
    ctx->pc = 0x1fd248u;
    // NOP
    // 0x1fd24c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1fd24cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1fd250: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FD250u;
    {
        const bool branch_taken_0x1fd250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd250) {
            ctx->pc = 0x1FD274u;
            return;
        }
    }
    ctx->pc = 0x1FD258u;
}
