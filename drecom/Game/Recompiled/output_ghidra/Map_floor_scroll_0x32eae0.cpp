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

// Function: Map_floor_scroll
// Address: 0x32eae0 - 0x32ec14
void Map_floor_scroll_0x32eae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Map_floor_scroll_0x32eae0");
#endif

    ctx->pc = 0x32eae0u;

    // 0x32eae0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32eae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32eae4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32eae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32eae8: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x32eae8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x32eaec: 0x24706150  addiu       $s0, $v1, 0x6150
    ctx->pc = 0x32eaecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24912));
    // 0x32eaf0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32eaf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32eaf4: 0x8c24011c  lw          $a0, 0x11C($at)
    ctx->pc = 0x32eaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D011Cu));
    // 0x32eaf8: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x32eaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x32eafc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x32eafcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x32eb00: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x32EB00u;
    {
        const bool branch_taken_0x32eb00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32eb00) {
            ctx->pc = 0x32EB14u;
            goto label_32eb14;
        }
    }
    ctx->pc = 0x32EB08u;
    // 0x32eb08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32eb08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32eb0c: 0xae035dc8  sw          $v1, 0x5DC8($s0)
    ctx->pc = 0x32eb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24008), GPR_U32(ctx, 3));
    // 0x32eb10: 0xae005dcc  sw          $zero, 0x5DCC($s0)
    ctx->pc = 0x32eb10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24012), GPR_U32(ctx, 0));
label_32eb14:
    // 0x32eb14: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32eb14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32eb18: 0x8c240110  lw          $a0, 0x110($at)
    ctx->pc = 0x32eb18u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0110u));
    // 0x32eb1c: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x32eb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x32eb20: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x32eb20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x32eb24: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x32EB24u;
    {
        const bool branch_taken_0x32eb24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32eb24) {
            ctx->pc = 0x32EB38u;
            goto label_32eb38;
        }
    }
    ctx->pc = 0x32EB2Cu;
    // 0x32eb2c: 0x8e036610  lw          $v1, 0x6610($s0)
    ctx->pc = 0x32eb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26128)));
    // 0x32eb30: 0x24630005  addiu       $v1, $v1, 0x5
    ctx->pc = 0x32eb30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x32eb34: 0xae036610  sw          $v1, 0x6610($s0)
    ctx->pc = 0x32eb34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26128), GPR_U32(ctx, 3));
label_32eb38:
    // 0x32eb38: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32eb38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32eb3c: 0x8c240110  lw          $a0, 0x110($at)
    ctx->pc = 0x32eb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0110u));
    // 0x32eb40: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x32eb40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x32eb44: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x32eb44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x32eb48: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x32EB48u;
    {
        const bool branch_taken_0x32eb48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32eb48) {
            ctx->pc = 0x32EB5Cu;
            goto label_32eb5c;
        }
    }
    ctx->pc = 0x32EB50u;
    // 0x32eb50: 0x8e036610  lw          $v1, 0x6610($s0)
    ctx->pc = 0x32eb50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26128)));
    // 0x32eb54: 0x2463fffb  addiu       $v1, $v1, -0x5
    ctx->pc = 0x32eb54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
    // 0x32eb58: 0xae036610  sw          $v1, 0x6610($s0)
    ctx->pc = 0x32eb58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26128), GPR_U32(ctx, 3));
label_32eb5c:
    // 0x32eb5c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32eb5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32eb60: 0x8c240110  lw          $a0, 0x110($at)
    ctx->pc = 0x32eb60u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0110u));
    // 0x32eb64: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x32eb64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x32eb68: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x32eb68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x32eb6c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x32EB6Cu;
    {
        const bool branch_taken_0x32eb6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32eb6c) {
            ctx->pc = 0x32EB80u;
            goto label_32eb80;
        }
    }
    ctx->pc = 0x32EB74u;
    // 0x32eb74: 0x8e036614  lw          $v1, 0x6614($s0)
    ctx->pc = 0x32eb74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26132)));
    // 0x32eb78: 0x2463fffb  addiu       $v1, $v1, -0x5
    ctx->pc = 0x32eb78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
    // 0x32eb7c: 0xae036614  sw          $v1, 0x6614($s0)
    ctx->pc = 0x32eb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26132), GPR_U32(ctx, 3));
label_32eb80:
    // 0x32eb80: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32eb80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32eb84: 0x8c240110  lw          $a0, 0x110($at)
    ctx->pc = 0x32eb84u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0110u));
    // 0x32eb88: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x32eb88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x32eb8c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x32eb8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x32eb90: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x32EB90u;
    {
        const bool branch_taken_0x32eb90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32eb90) {
            ctx->pc = 0x32EBA4u;
            goto label_32eba4;
        }
    }
    ctx->pc = 0x32EB98u;
    // 0x32eb98: 0x8e036614  lw          $v1, 0x6614($s0)
    ctx->pc = 0x32eb98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26132)));
    // 0x32eb9c: 0x24630005  addiu       $v1, $v1, 0x5
    ctx->pc = 0x32eb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x32eba0: 0xae036614  sw          $v1, 0x6614($s0)
    ctx->pc = 0x32eba0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26132), GPR_U32(ctx, 3));
label_32eba4:
    // 0x32eba4: 0x8e036614  lw          $v1, 0x6614($s0)
    ctx->pc = 0x32eba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26132)));
    // 0x32eba8: 0x286101bd  slti        $at, $v1, 0x1BD
    ctx->pc = 0x32eba8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)445) ? 1 : 0);
    // 0x32ebac: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x32EBACu;
    {
        const bool branch_taken_0x32ebac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x32ebac) {
            ctx->pc = 0x32EBBCu;
            goto label_32ebbc;
        }
    }
    ctx->pc = 0x32EBB4u;
    // 0x32ebb4: 0x240301bc  addiu       $v1, $zero, 0x1BC
    ctx->pc = 0x32ebb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 444));
    // 0x32ebb8: 0xae036614  sw          $v1, 0x6614($s0)
    ctx->pc = 0x32ebb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26132), GPR_U32(ctx, 3));
label_32ebbc:
    // 0x32ebbc: 0x8e036614  lw          $v1, 0x6614($s0)
    ctx->pc = 0x32ebbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26132)));
    // 0x32ebc0: 0x2861002c  slti        $at, $v1, 0x2C
    ctx->pc = 0x32ebc0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)44) ? 1 : 0);
    // 0x32ebc4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x32EBC4u;
    {
        const bool branch_taken_0x32ebc4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ebc4) {
            ctx->pc = 0x32EBD4u;
            goto label_32ebd4;
        }
    }
    ctx->pc = 0x32EBCCu;
    // 0x32ebcc: 0x2403002c  addiu       $v1, $zero, 0x2C
    ctx->pc = 0x32ebccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x32ebd0: 0xae036614  sw          $v1, 0x6614($s0)
    ctx->pc = 0x32ebd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26132), GPR_U32(ctx, 3));
label_32ebd4:
    // 0x32ebd4: 0x8e036610  lw          $v1, 0x6610($s0)
    ctx->pc = 0x32ebd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26128)));
    // 0x32ebd8: 0x28610199  slti        $at, $v1, 0x199
    ctx->pc = 0x32ebd8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)409) ? 1 : 0);
    // 0x32ebdc: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x32EBDCu;
    {
        const bool branch_taken_0x32ebdc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x32ebdc) {
            ctx->pc = 0x32EBECu;
            goto label_32ebec;
        }
    }
    ctx->pc = 0x32EBE4u;
    // 0x32ebe4: 0x24030198  addiu       $v1, $zero, 0x198
    ctx->pc = 0x32ebe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 408));
    // 0x32ebe8: 0xae036610  sw          $v1, 0x6610($s0)
    ctx->pc = 0x32ebe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26128), GPR_U32(ctx, 3));
label_32ebec:
    // 0x32ebec: 0x8e036610  lw          $v1, 0x6610($s0)
    ctx->pc = 0x32ebecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26128)));
    // 0x32ebf0: 0x28610018  slti        $at, $v1, 0x18
    ctx->pc = 0x32ebf0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x32ebf4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x32EBF4u;
    {
        const bool branch_taken_0x32ebf4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ebf4) {
            ctx->pc = 0x32EC04u;
            goto label_32ec04;
        }
    }
    ctx->pc = 0x32EBFCu;
    // 0x32ebfc: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x32ebfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x32ec00: 0xae036610  sw          $v1, 0x6610($s0)
    ctx->pc = 0x32ec00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26128), GPR_U32(ctx, 3));
label_32ec04:
    // 0x32ec04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32ec04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32ec08: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x32ec08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x32ec0c: 0x3e00008  jr          $ra
    ctx->pc = 0x32EC0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32EC0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32EC14u;
}
