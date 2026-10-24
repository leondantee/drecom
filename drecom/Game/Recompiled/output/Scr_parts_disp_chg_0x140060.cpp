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

// Function: Scr_parts_disp_chg
// Address: 0x140060 - 0x140138
void Scr_parts_disp_chg_0x140060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Scr_parts_disp_chg_0x140060");
#endif

    switch (ctx->pc) {
        case 0x140064u: goto label_140064;
        case 0x1400a4u: goto label_1400a4;
        case 0x1400c8u: goto label_1400c8;
        case 0x1400f0u: goto label_1400f0;
        default: break;
    }

    ctx->pc = 0x140060u;

    // 0x140060: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x140060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_140064:
    // 0x140064: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x140064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x140068: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x140068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x14006c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14006cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x140070: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x140070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x140074: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x140074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x140078: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x140078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14007c: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x14007cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x140080: 0xafa50068  sw          $a1, 0x68($sp)
    ctx->pc = 0x140080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 5));
    // 0x140084: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x140084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x140088: 0x24740b10  addiu       $s4, $v1, 0xB10
    ctx->pc = 0x140088u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 2832));
    // 0x14008c: 0x8e9002d0  lw          $s0, 0x2D0($s4)
    ctx->pc = 0x14008cu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5D0DE0u));
    // 0x140090: 0x8e83005c  lw          $v1, 0x5C($s4)
    ctx->pc = 0x140090u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0B6Cu));
    // 0x140094: 0x24710008  addiu       $s1, $v1, 0x8
    ctx->pc = 0x140094u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x140098: 0x8e9002d0  lw          $s0, 0x2D0($s4)
    ctx->pc = 0x140098u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5D0DE0u));
    // 0x14009c: 0x96830052  lhu         $v1, 0x52($s4)
    ctx->pc = 0x14009cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D0B62u));
    // 0x1400a0: 0x3075ffff  andi        $s5, $v1, 0xFFFF
    ctx->pc = 0x1400a0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_1400a4:
    // 0x1400a4: 0x8e330008  lw          $s3, 0x8($s1)
    ctx->pc = 0x1400a4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1400a8: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x1400a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x1400ac: 0x2631824  and         $v1, $s3, $v1
    ctx->pc = 0x1400acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & GPR_U64(ctx, 3));
    // 0x1400b0: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1400B0u;
    {
        const bool branch_taken_0x1400b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1400b0) {
            ctx->pc = 0x140100u;
            goto label_140100;
        }
    }
    ctx->pc = 0x1400B8u;
    // 0x1400b8: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1400b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1400bc: 0x30720f00  andi        $s2, $v1, 0xF00
    ctx->pc = 0x1400bcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3840);
    // 0x1400c0: 0x129202  srl         $s2, $s2, 8
    ctx->pc = 0x1400c0u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 18), 8));
    // 0x1400c4: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1400c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1400c8:
    // 0x1400c8: 0x1643000d  bne         $s2, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1400C8u;
    {
        const bool branch_taken_0x1400c8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x1400c8) {
            ctx->pc = 0x140100u;
            goto label_140100;
        }
    }
    ctx->pc = 0x1400D0u;
    // 0x1400d0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1400d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1400d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1400d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1400d8: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1400D8u;
    {
        const bool branch_taken_0x1400d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1400d8) {
            ctx->pc = 0x1400F4u;
            goto label_1400f4;
        }
    }
    ctx->pc = 0x1400E0u;
    // 0x1400e0: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1400e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1400e4: 0x306300fb  andi        $v1, $v1, 0xFB
    ctx->pc = 0x1400e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)251);
    // 0x1400e8: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x1400e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1400ec: 0x10000004  b           . + 4 + (0x4 << 2)
label_1400f0:
    if (ctx->pc == 0x1400F0u) {
        ctx->pc = 0x1400F4u;
        goto label_1400f4;
    }
    ctx->pc = 0x1400ECu;
    {
        const bool branch_taken_0x1400ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1400ec) {
            ctx->pc = 0x140100u;
            goto label_140100;
        }
    }
    ctx->pc = 0x1400F4u;
label_1400f4:
    // 0x1400f4: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1400f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1400f8: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x1400f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x1400fc: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x1400fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
label_140100:
    // 0x140100: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x140100u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x140104: 0x26100120  addiu       $s0, $s0, 0x120
    ctx->pc = 0x140104u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x140108: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x140108u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x14010c: 0x16a0ffe5  bnez        $s5, . + 4 + (-0x1B << 2)
    ctx->pc = 0x14010Cu;
    {
        const bool branch_taken_0x14010c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x14010c) {
            ctx->pc = 0x1400A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1400a4;
        }
    }
    ctx->pc = 0x140114u;
    // 0x140114: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x140114u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x140118: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x140118u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14011c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14011cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x140120: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x140120u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x140124: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x140124u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140128: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x140128u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14012c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x14012cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x140130: 0x3e00008  jr          $ra
    ctx->pc = 0x140130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x140138u;
}
