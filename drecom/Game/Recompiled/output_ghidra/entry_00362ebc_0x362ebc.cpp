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

// Function: entry_00362ebc
// Address: 0x362ebc - 0x362f34
void entry_00362ebc_0x362ebc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00362ebc_0x362ebc");
#endif

    ctx->pc = 0x362ebcu;

    // 0x362ebc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x362ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x362ec0: 0x8c631334  lw          $v1, 0x1334($v1)
    ctx->pc = 0x362ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4916)));
    // 0x362ec4: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x362ec4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x362ec8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x362ec8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x362ecc: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x362eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x362ed0: 0x14830018  bne         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x362ED0u;
    {
        const bool branch_taken_0x362ed0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x362ed0) {
            ctx->pc = 0x362F34u;
            return;
        }
    }
    ctx->pc = 0x362ED8u;
    // 0x362ed8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x362ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x362edc: 0x8c701334  lw          $s0, 0x1334($v1)
    ctx->pc = 0x362edcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4916)));
    // 0x362ee0: 0x8e04133c  lw          $a0, 0x133C($s0)
    ctx->pc = 0x362ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4924)));
    // 0x362ee4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x362ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x362ee8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x362ee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x362eec: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x362EECu;
    {
        const bool branch_taken_0x362eec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x362eec) {
            ctx->pc = 0x362F34u;
            return;
        }
    }
    ctx->pc = 0x362EF4u;
    // 0x362ef4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x362ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x362ef8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x362ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x362efc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x362efcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x362f00: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x362f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x362f04: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x362f04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x362f08: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x362f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x362f0c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x362f0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x362f10: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x362f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x362f14: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x362f14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x362f18: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x362f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x362f1c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x362f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x362f20: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x362f20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x362f24: 0x8ca4133c  lw          $a0, 0x133C($a1)
    ctx->pc = 0x362f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4924)));
    // 0x362f28: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x362f28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x362f2c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x362f2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x362f30: 0xaca3133c  sw          $v1, 0x133C($a1)
    ctx->pc = 0x362f30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4924), GPR_U32(ctx, 3));
    ctx->pc = 0x362f34u;
}
