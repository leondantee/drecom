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

// Function: entry_0035ebfc
// Address: 0x35ebfc - 0x35ec74
void entry_0035ebfc_0x35ebfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035ebfc_0x35ebfc");
#endif

    ctx->pc = 0x35ebfcu;

    // 0x35ebfc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35ebfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35ec00: 0x8c631334  lw          $v1, 0x1334($v1)
    ctx->pc = 0x35ec00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4916)));
    // 0x35ec04: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x35ec04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x35ec08: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x35ec08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x35ec0c: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x35ec0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x35ec10: 0x14830018  bne         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x35EC10u;
    {
        const bool branch_taken_0x35ec10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x35ec10) {
            ctx->pc = 0x35EC74u;
            return;
        }
    }
    ctx->pc = 0x35EC18u;
    // 0x35ec18: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35ec18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35ec1c: 0x8c701334  lw          $s0, 0x1334($v1)
    ctx->pc = 0x35ec1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4916)));
    // 0x35ec20: 0x8e04133c  lw          $a0, 0x133C($s0)
    ctx->pc = 0x35ec20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4924)));
    // 0x35ec24: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x35ec24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x35ec28: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x35ec28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x35ec2c: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x35EC2Cu;
    {
        const bool branch_taken_0x35ec2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35ec2c) {
            ctx->pc = 0x35EC74u;
            return;
        }
    }
    ctx->pc = 0x35EC34u;
    // 0x35ec34: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x35ec34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35ec38: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35ec38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35ec3c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x35ec3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x35ec40: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35ec40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35ec44: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x35ec44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x35ec48: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35ec48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35ec4c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x35ec4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x35ec50: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35ec50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35ec54: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x35ec54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x35ec58: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35ec58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35ec5c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x35ec5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x35ec60: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x35ec60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35ec64: 0x8ca4133c  lw          $a0, 0x133C($a1)
    ctx->pc = 0x35ec64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4924)));
    // 0x35ec68: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x35ec68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x35ec6c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x35ec6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x35ec70: 0xaca3133c  sw          $v1, 0x133C($a1)
    ctx->pc = 0x35ec70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4924), GPR_U32(ctx, 3));
    ctx->pc = 0x35ec74u;
}
