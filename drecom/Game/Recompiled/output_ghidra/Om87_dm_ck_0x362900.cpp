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

// Function: Om87_dm_ck
// Address: 0x362900 - 0x3629f0
void Om87_dm_ck_0x362900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om87_dm_ck_0x362900");
#endif

    ctx->pc = 0x362900u;

    // 0x362900: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x362900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x362904: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x362904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x362908: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x362908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36290c: 0x904211ee  lbu         $v0, 0x11EE($v0)
    ctx->pc = 0x36290cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4590)));
    // 0x362910: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x362910u;
    {
        const bool branch_taken_0x362910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x362910) {
            ctx->pc = 0x362924u;
            goto label_362924;
        }
    }
    ctx->pc = 0x362918u;
    // 0x362918: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x362918u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36291c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x36291Cu;
    {
        const bool branch_taken_0x36291c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36291c) {
            ctx->pc = 0x3629E4u;
            goto label_3629e4;
        }
    }
    ctx->pc = 0x362924u;
label_362924:
    // 0x362924: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x362924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x362928: 0x904211ee  lbu         $v0, 0x11EE($v0)
    ctx->pc = 0x362928u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4590)));
    // 0x36292c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36292Cu;
    {
        const bool branch_taken_0x36292c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36292c) {
            ctx->pc = 0x362940u;
            goto label_362940;
        }
    }
    ctx->pc = 0x362934u;
    // 0x362934: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x362934u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x362938: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x362938u;
    {
        const bool branch_taken_0x362938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x362938) {
            ctx->pc = 0x3629E4u;
            goto label_3629e4;
        }
    }
    ctx->pc = 0x362940u;
label_362940:
    // 0x362940: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x362940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x362944: 0x944211f6  lhu         $v0, 0x11F6($v0)
    ctx->pc = 0x362944u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4598)));
    // 0x362948: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x362948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x36294c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36294cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x362950: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x362950u;
    {
        const bool branch_taken_0x362950 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x362950) {
            ctx->pc = 0x362990u;
            goto label_362990;
        }
    }
    ctx->pc = 0x362958u;
    // 0x362958: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x362958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36295c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x36295cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x362960: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x362960u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x362964: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x362964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x362968: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x362968u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x36296c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x36296cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x362970: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x362970u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x362974: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x362974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x362978: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x362978u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x36297c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x36297cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x362980: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x362980u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x362984: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x362984u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x362988: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x362988u;
    {
        const bool branch_taken_0x362988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x362988) {
            ctx->pc = 0x3629E4u;
            goto label_3629e4;
        }
    }
    ctx->pc = 0x362990u;
label_362990:
    // 0x362990: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x362990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x362994: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x362994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x362998: 0xa44310a6  sh          $v1, 0x10A6($v0)
    ctx->pc = 0x362998u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 3));
    // 0x36299c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x36299cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3629a0: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x3629a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3629a4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x3629a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3629a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3629a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3629ac: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x3629acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3629b0: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x3629b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3629b4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x3629b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3629b8: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x3629b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3629bc: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x3629bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3629c0: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x3629c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3629c4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x3629c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3629c8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3629c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3629cc: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x3629ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3629d0: 0x8c83133c  lw          $v1, 0x133C($a0)
    ctx->pc = 0x3629d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4924)));
    // 0x3629d4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3629d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3629d8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x3629d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3629dc: 0xac82133c  sw          $v0, 0x133C($a0)
    ctx->pc = 0x3629dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4924), GPR_U32(ctx, 2));
    // 0x3629e0: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x3629e0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_3629e4:
    // 0x3629e4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3629e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3629e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3629E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3629E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3629F0u;
}
