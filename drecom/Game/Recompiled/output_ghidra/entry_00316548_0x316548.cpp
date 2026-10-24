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

// Function: entry_00316548
// Address: 0x316548 - 0x3165c4
void entry_00316548_0x316548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00316548_0x316548");
#endif

    ctx->pc = 0x316548u;

    // 0x316548: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x316548u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x31654c: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x31654Cu;
    {
        const bool branch_taken_0x31654c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31654c) {
            ctx->pc = 0x3164DCu;
            return;
        }
    }
    ctx->pc = 0x316554u;
    // 0x316554: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x316554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x316558: 0x24649b90  addiu       $a0, $v1, -0x6470
    ctx->pc = 0x316558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941584));
    // 0x31655c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x31655cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x316560: 0xac641228  sw          $a0, 0x1228($v1)
    ctx->pc = 0x316560u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4648), GPR_U32(ctx, 4));
    // 0x316564: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x316564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x316568: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x316568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x31656c: 0xa46410a6  sh          $a0, 0x10A6($v1)
    ctx->pc = 0x31656cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 4));
    // 0x316570: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x316570u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x316574: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x316574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x316578: 0xac64121c  sw          $a0, 0x121C($v1)
    ctx->pc = 0x316578u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4636), GPR_U32(ctx, 4));
    // 0x31657c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x31657cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x316580: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x316580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x316584: 0xa0641219  sb          $a0, 0x1219($v1)
    ctx->pc = 0x316584u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4633), (uint8_t)GPR_U32(ctx, 4));
    // 0x316588: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x316588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x31658c: 0xa06011ee  sb          $zero, 0x11EE($v1)
    ctx->pc = 0x31658cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x316590: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x316590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x316594: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x316594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x316598: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x316598u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x31659c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x31659cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3165a0: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3165a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3165a4: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x3165a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3165a8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3165a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3165ac: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x3165acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3165b0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3165b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3165b4: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x3165b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3165b8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3165b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x3165bc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3165BCu;
    {
        const bool branch_taken_0x3165bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3165bc) {
            ctx->pc = 0x3165F0u;
            return;
        }
    }
    ctx->pc = 0x3165C4u;
}
