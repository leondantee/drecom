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

// Function: entry_00279b50
// Address: 0x279b50 - 0x279c2c
void entry_00279b50_0x279b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00279b50_0x279b50");
#endif

    switch (ctx->pc) {
        case 0x279ba4u: goto label_279ba4;
        case 0x279bb4u: goto label_279bb4;
        case 0x279bc4u: goto label_279bc4;
        case 0x279bd4u: goto label_279bd4;
        case 0x279be4u: goto label_279be4;
        case 0x279bf4u: goto label_279bf4;
        case 0x279c04u: goto label_279c04;
        case 0x279c14u: goto label_279c14;
        case 0x279c24u: goto label_279c24;
        default: break;
    }

    ctx->pc = 0x279b50u;

    // 0x279b50: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x279b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x279b54: 0x3c03451c  lui         $v1, 0x451C
    ctx->pc = 0x279b54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17692 << 16));
    // 0x279b58: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x279b58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x279b5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x279b5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x279b60: 0x0  nop
    ctx->pc = 0x279b60u;
    // NOP
    // 0x279b64: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x279b64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x279b68: 0x0  nop
    ctx->pc = 0x279b68u;
    // NOP
    // 0x279b6c: 0x4501002f  bc1t        . + 4 + (0x2F << 2)
    ctx->pc = 0x279B6Cu;
    {
        const bool branch_taken_0x279b6c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x279b6c) {
            ctx->pc = 0x279C2Cu;
            return;
        }
    }
    ctx->pc = 0x279B74u;
    // 0x279b74: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x279b74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x279b78: 0x8c241aa0  lw          $a0, 0x1AA0($at)
    ctx->pc = 0x279b78u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x621AA0u));
    // 0x279b7c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x279b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x279b80: 0x10830056  beq         $a0, $v1, . + 4 + (0x56 << 2)
    ctx->pc = 0x279B80u;
    {
        const bool branch_taken_0x279b80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x279b80) {
            ctx->pc = 0x279CDCu;
            return;
        }
    }
    ctx->pc = 0x279B88u;
    // 0x279b88: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x279b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x279b8c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x279b8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x279b90: 0xac221aa0  sw          $v0, 0x1AA0($at)
    ctx->pc = 0x279b90u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621AA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621AA0u, _value); } while (0);
    // 0x279b94: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x279b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x279b98: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x279b98u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x279b9c: 0xc050018  jal         func_140060
    ctx->pc = 0x279B9Cu;
    SET_GPR_U32(ctx, 31, 0x279BA4u);
    ctx->pc = 0x140060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140060u, 0x279B9Cu, 0x279BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279BA4u;
label_279ba4:
    // 0x279ba4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x279ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x279ba8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x279ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x279bac: 0xc050018  jal         func_140060
    ctx->pc = 0x279BACu;
    SET_GPR_U32(ctx, 31, 0x279BB4u);
    ctx->pc = 0x140060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140060u, 0x279BACu, 0x279BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279BB4u;
label_279bb4:
    // 0x279bb4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x279bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x279bb8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x279bb8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x279bbc: 0xc050018  jal         func_140060
    ctx->pc = 0x279BBCu;
    SET_GPR_U32(ctx, 31, 0x279BC4u);
    ctx->pc = 0x140060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140060u, 0x279BBCu, 0x279BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279BC4u;
label_279bc4:
    // 0x279bc4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x279bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x279bc8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x279bc8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x279bcc: 0xc09e73c  jal         func_279CF0
    ctx->pc = 0x279BCCu;
    SET_GPR_U32(ctx, 31, 0x279BD4u);
    ctx->pc = 0x279CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279CF0u, 0x279BCCu, 0x279BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279BD4u;
label_279bd4:
    // 0x279bd4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x279bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x279bd8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x279bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x279bdc: 0xc09e73c  jal         func_279CF0
    ctx->pc = 0x279BDCu;
    SET_GPR_U32(ctx, 31, 0x279BE4u);
    ctx->pc = 0x279CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279CF0u, 0x279BDCu, 0x279BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279BE4u;
label_279be4:
    // 0x279be4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x279be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x279be8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x279be8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x279bec: 0xc09e73c  jal         func_279CF0
    ctx->pc = 0x279BECu;
    SET_GPR_U32(ctx, 31, 0x279BF4u);
    ctx->pc = 0x279CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279CF0u, 0x279BECu, 0x279BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279BF4u;
label_279bf4:
    // 0x279bf4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x279bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x279bf8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x279bf8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x279bfc: 0xc09e788  jal         func_279E20
    ctx->pc = 0x279BFCu;
    SET_GPR_U32(ctx, 31, 0x279C04u);
    ctx->pc = 0x279E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279E20u, 0x279BFCu, 0x279C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279C04u;
label_279c04:
    // 0x279c04: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x279c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x279c08: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x279c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x279c0c: 0xc09e788  jal         func_279E20
    ctx->pc = 0x279C0Cu;
    SET_GPR_U32(ctx, 31, 0x279C14u);
    ctx->pc = 0x279E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279E20u, 0x279C0Cu, 0x279C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279C14u;
label_279c14:
    // 0x279c14: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x279c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x279c18: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x279c18u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x279c1c: 0xc09e788  jal         func_279E20
    ctx->pc = 0x279C1Cu;
    SET_GPR_U32(ctx, 31, 0x279C24u);
    ctx->pc = 0x279E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279E20u, 0x279C1Cu, 0x279C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279C24u;
label_279c24:
    // 0x279c24: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x279C24u;
    {
        const bool branch_taken_0x279c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x279c24) {
            ctx->pc = 0x279CDCu;
            return;
        }
    }
    ctx->pc = 0x279C2Cu;
}
