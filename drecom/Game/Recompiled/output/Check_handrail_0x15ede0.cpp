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

// Function: Check_handrail
// Address: 0x15ede0 - 0x15eeac
void Check_handrail_0x15ede0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Check_handrail_0x15ede0");
#endif

    ctx->pc = 0x15ede0u;

    // 0x15ede0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15ede0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15ede4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15ede4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15ede8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15ede8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15edec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15edecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15edf0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x15edf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x15edf4: 0x24520080  addiu       $s2, $v0, 0x80
    ctx->pc = 0x15edf4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x15edf8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x15edf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x15edfc: 0x2450dbc0  addiu       $s0, $v0, -0x2440
    ctx->pc = 0x15edfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x15ee00: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x15ee00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x15ee04: 0x2451eea0  addiu       $s1, $v0, -0x1160
    ctx->pc = 0x15ee04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962848));
    // 0x15ee08: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x15ee08u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D011Cu));
    // 0x15ee0c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x15ee0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x15ee10: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15EE10u;
    {
        const bool branch_taken_0x15ee10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ee10) {
            ctx->pc = 0x15EE24u;
            goto label_15ee24;
        }
    }
    ctx->pc = 0x15EE18u;
    // 0x15ee18: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x15ee18u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15ee1c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x15EE1Cu;
    {
        const bool branch_taken_0x15ee1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ee1c) {
            ctx->pc = 0x15EE94u;
            goto label_15ee94;
        }
    }
    ctx->pc = 0x15EE24u;
label_15ee24:
    // 0x15ee24: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x15ee24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x15ee28: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x15ee28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x15ee2c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15EE2Cu;
    {
        const bool branch_taken_0x15ee2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15ee2c) {
            ctx->pc = 0x15EE40u;
            goto label_15ee40;
        }
    }
    ctx->pc = 0x15EE34u;
    // 0x15ee34: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x15ee34u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15ee38: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x15EE38u;
    {
        const bool branch_taken_0x15ee38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ee38) {
            ctx->pc = 0x15EE94u;
            goto label_15ee94;
        }
    }
    ctx->pc = 0x15EE40u;
label_15ee40:
    // 0x15ee40: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x15ee40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15ee44: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x15ee44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x15ee48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15ee48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ee4c: 0x0  nop
    ctx->pc = 0x15ee4cu;
    // NOP
    // 0x15ee50: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x15ee50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15ee54: 0x0  nop
    ctx->pc = 0x15ee54u;
    // NOP
    // 0x15ee58: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x15EE58u;
    {
        const bool branch_taken_0x15ee58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15ee58) {
            ctx->pc = 0x15EE6Cu;
            goto label_15ee6c;
        }
    }
    ctx->pc = 0x15EE60u;
    // 0x15ee60: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x15ee60u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15ee64: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x15EE64u;
    {
        const bool branch_taken_0x15ee64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ee64) {
            ctx->pc = 0x15EE94u;
            goto label_15ee94;
        }
    }
    ctx->pc = 0x15EE6Cu;
label_15ee6c:
    // 0x15ee6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15ee6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15ee70: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x15ee70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x15ee74: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x15ee74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x15ee78: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x15ee78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x15ee7c: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x15ee7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x15ee80: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x15ee80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x15ee84: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x15ee84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x15ee88: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x15ee88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15ee8c: 0xe6001290  swc1        $f0, 0x1290($s0)
    ctx->pc = 0x15ee8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4752), bits); }
    // 0x15ee90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15ee90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15ee94:
    // 0x15ee94: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15ee94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15ee98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15ee98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15ee9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15ee9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15eea0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x15eea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15eea4: 0x3e00008  jr          $ra
    ctx->pc = 0x15EEA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15EEA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15EEACu;
}
