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

// Function: entry_00262bcc
// Address: 0x262bcc - 0x262c78
void entry_00262bcc_0x262bcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00262bcc_0x262bcc");
#endif

    switch (ctx->pc) {
        case 0x262c0cu: goto label_262c0c;
        case 0x262c1cu: goto label_262c1c;
        case 0x262c30u: goto label_262c30;
        case 0x262c50u: goto label_262c50;
        case 0x262c64u: goto label_262c64;
        default: break;
    }

    ctx->pc = 0x262bccu;

    // 0x262bcc: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x262bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x262bd0: 0x906309e6  lbu         $v1, 0x9E6($v1)
    ctx->pc = 0x262bd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2534)));
    // 0x262bd4: 0x10600064  beqz        $v1, . + 4 + (0x64 << 2)
    ctx->pc = 0x262BD4u;
    {
        const bool branch_taken_0x262bd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x262bd4) {
            ctx->pc = 0x262D68u;
            return;
        }
    }
    ctx->pc = 0x262BDCu;
    // 0x262bdc: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x262bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x262be0: 0x8c42034c  lw          $v0, 0x34C($v0)
    ctx->pc = 0x262be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 844)));
    // 0x262be4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x262be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x262be8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x262be8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x262bec: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x262becu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x262bf0: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x262bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x262bf4: 0x14620020  bne         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x262BF4u;
    {
        const bool branch_taken_0x262bf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x262bf4) {
            ctx->pc = 0x262C78u;
            return;
        }
    }
    ctx->pc = 0x262BFCu;
    // 0x262bfc: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x262bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x262c00: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x262c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x262c04: 0xc040c9e  jal         func_103278
    ctx->pc = 0x262C04u;
    SET_GPR_U32(ctx, 31, 0x262C0Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x262C0Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262C0Cu) { return; }
    ctx->pc = 0x262C0Cu;
label_262c0c:
    // 0x262c0c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x262c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x262c10: 0x260500b0  addiu       $a1, $s0, 0xB0
    ctx->pc = 0x262c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x262c14: 0xc040c9e  jal         func_103278
    ctx->pc = 0x262C14u;
    SET_GPR_U32(ctx, 31, 0x262C1Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x262C1Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262C1Cu) { return; }
    ctx->pc = 0x262C1Cu;
label_262c1c:
    // 0x262c1c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x262c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x262c20: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x262c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x262c24: 0xc7ac00c8  lwc1        $f12, 0xC8($sp)
    ctx->pc = 0x262c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x262c28: 0xc040c8c  jal         func_103230
    ctx->pc = 0x262C28u;
    SET_GPR_U32(ctx, 31, 0x262C30u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x262C30u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262C30u) { return; }
    ctx->pc = 0x262C30u;
label_262c30:
    // 0x262c30: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x262c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x262c34: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x262c34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x262c38: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x262c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262c3c: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x262c3cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x262c40: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x262c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x262c44: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x262c44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x262c48: 0xc040c8c  jal         func_103230
    ctx->pc = 0x262C48u;
    SET_GPR_U32(ctx, 31, 0x262C50u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x262C50u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262C50u) { return; }
    ctx->pc = 0x262C50u;
label_262c50:
    // 0x262c50: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x262c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x262c54: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x262c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x262c58: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x262c58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x262c5c: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x262C5Cu;
    SET_GPR_U32(ctx, 31, 0x262C64u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x262C5Cu, 0x262C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262C64u;
label_262c64:
    // 0x262c64: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x262c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x262c68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x262c68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x262c6c: 0x0  nop
    ctx->pc = 0x262c6cu;
    // NOP
    // 0x262c70: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x262c70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x262c74: 0x0  nop
    ctx->pc = 0x262c74u;
    // NOP
    ctx->pc = 0x262c78u;
}
