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

// Function: entry_00143328
// Address: 0x143328 - 0x1433e8
void entry_00143328_0x143328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143328_0x143328");
#endif

    switch (ctx->pc) {
        case 0x1433e4u: goto label_1433e4;
        default: break;
    }

    ctx->pc = 0x143328u;

    // 0x143328: 0x32a20004  andi        $v0, $s5, 0x4
    ctx->pc = 0x143328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
    // 0x14332c: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x14332Cu;
    {
        const bool branch_taken_0x14332c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14332c) {
            ctx->pc = 0x1433E8u;
            return;
        }
    }
    ctx->pc = 0x143334u;
    // 0x143334: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x143334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x143338: 0x24509110  addiu       $s0, $v0, -0x6EF0
    ctx->pc = 0x143338u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938896));
    // 0x14333c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x14333cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x143340: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x143340u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3E9110u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E9110u, _value); } while (0);
    // 0x143344: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x143344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
    // 0x143348: 0x34442b16  ori         $a0, $v0, 0x2B16
    ctx->pc = 0x143348u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11030);
    // 0x14334c: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x14334cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3E9114u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E9114u, _value); } while (0);
    // 0x143350: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x143350u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3E911Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E911Cu, _value); } while (0);
    // 0x143354: 0x131c00  sll         $v1, $s3, 16
    ctx->pc = 0x143354u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
    // 0x143358: 0x131200  sll         $v0, $s3, 8
    ctx->pc = 0x143358u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 8));
    // 0x14335c: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x14335cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x143360: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x143360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x143364: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x143364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x143368: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x143368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14336c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x14336cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x143370: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x143370u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x143374: 0x3c047900  lui         $a0, 0x7900
    ctx->pc = 0x143374u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)30976 << 16));
    // 0x143378: 0x34857000  ori         $a1, $a0, 0x7000
    ctx->pc = 0x143378u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)28672);
    // 0x14337c: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x14337cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x143380: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x143380u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x143384: 0x3404fffd  ori         $a0, $zero, 0xFFFD
    ctx->pc = 0x143384u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65533);
    // 0x143388: 0x2603001c  addiu       $v1, $s0, 0x1C
    ctx->pc = 0x143388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x14338c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x14338cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x143390: 0x3c028700  lui         $v0, 0x8700
    ctx->pc = 0x143390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34560 << 16));
    // 0x143394: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x143394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x143398: 0x26040024  addiu       $a0, $s0, 0x24
    ctx->pc = 0x143398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x14339c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x14339cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1433a0: 0x3402fffc  ori         $v0, $zero, 0xFFFC
    ctx->pc = 0x1433a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
    // 0x1433a4: 0x26030028  addiu       $v1, $s0, 0x28
    ctx->pc = 0x1433a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x1433a8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1433a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1433ac: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x1433acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1433b0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1433b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1433b4: 0x3c021e00  lui         $v0, 0x1E00
    ctx->pc = 0x1433b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7680 << 16));
    // 0x1433b8: 0x34422800  ori         $v0, $v0, 0x2800
    ctx->pc = 0x1433b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10240);
    // 0x1433bc: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x1433bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1433c0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1433c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1433c4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1433c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1433c8: 0x2443cca0  addiu       $v1, $v0, -0x3360
    ctx->pc = 0x1433c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954144));
    // 0x1433cc: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1433ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1433d0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1433d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1433d4: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x1433d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x1433d8: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x1433d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1433dc: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1433DCu;
    SET_GPR_U32(ctx, 31, 0x1433E4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1433DCu, 0x1433E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1433E4u;
label_1433e4:
    // 0x1433e4: 0x0  nop
    ctx->pc = 0x1433e4u;
    // NOP
    ctx->pc = 0x1433e8u;
}
