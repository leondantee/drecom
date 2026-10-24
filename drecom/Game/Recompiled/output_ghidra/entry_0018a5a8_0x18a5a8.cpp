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

// Function: entry_0018a5a8
// Address: 0x18a5a8 - 0x18a610
void entry_0018a5a8_0x18a5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a5a8_0x18a5a8");
#endif

    ctx->pc = 0x18a5a8u;

    // 0x18a5a8: 0x2e03003f  sltiu       $v1, $s0, 0x3F
    ctx->pc = 0x18a5a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)63) ? 1 : 0);
    // 0x18a5ac: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x18A5ACu;
    {
        const bool branch_taken_0x18a5ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a5ac) {
            ctx->pc = 0x18A590u;
            return;
        }
    }
    ctx->pc = 0x18A5B4u;
    // 0x18a5b4: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x18a5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x18a5b8: 0x2463a780  addiu       $v1, $v1, -0x5880
    ctx->pc = 0x18a5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944640));
    // 0x18a5bc: 0xae230080  sw          $v1, 0x80($s1)
    ctx->pc = 0x18a5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 3));
    // 0x18a5c0: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x18a5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x18a5c4: 0x2463ea70  addiu       $v1, $v1, -0x1590
    ctx->pc = 0x18a5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961776));
    // 0x18a5c8: 0xae230084  sw          $v1, 0x84($s1)
    ctx->pc = 0x18a5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 3));
    // 0x18a5cc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x18a5ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x18a5d0: 0xac20a86c  sw          $zero, -0x5794($at)
    ctx->pc = 0x18a5d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x53A86Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A86Cu, _value); } while (0);
    // 0x18a5d4: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x18a5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x18a5d8: 0x2463a890  addiu       $v1, $v1, -0x5770
    ctx->pc = 0x18a5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944912));
    // 0x18a5dc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x18a5dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x18a5e0: 0xac23a870  sw          $v1, -0x5790($at)
    ctx->pc = 0x18a5e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x53A870u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A870u, _value); } while (0);
    // 0x18a5e4: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x18a5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x18a5e8: 0x2463e960  addiu       $v1, $v1, -0x16A0
    ctx->pc = 0x18a5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961504));
    // 0x18a5ec: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x18a5ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x18a5f0: 0xac23eb5c  sw          $v1, -0x14A4($at)
    ctx->pc = 0x18a5f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x53EB5Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53EB5Cu, _value); } while (0);
    // 0x18a5f4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x18a5f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x18a5f8: 0xac20eb60  sw          $zero, -0x14A0($at)
    ctx->pc = 0x18a5f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x53EB60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53EB60u, _value); } while (0);
    // 0x18a5fc: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x18a5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x18a600: 0x2475a890  addiu       $s5, $v1, -0x5770
    ctx->pc = 0x18a600u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944912));
    // 0x18a604: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x18a604u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a608: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18A608u;
    {
        const bool branch_taken_0x18a608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a608) {
            ctx->pc = 0x18A628u;
            return;
        }
    }
    ctx->pc = 0x18A610u;
}
