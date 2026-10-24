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

// Function: entry_0018a4a8
// Address: 0x18a4a8 - 0x18a510
void entry_0018a4a8_0x18a4a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a4a8_0x18a4a8");
#endif

    ctx->pc = 0x18a4a8u;

    // 0x18a4a8: 0x2e03000f  sltiu       $v1, $s0, 0xF
    ctx->pc = 0x18a4a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x18a4ac: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x18A4ACu;
    {
        const bool branch_taken_0x18a4ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a4ac) {
            ctx->pc = 0x18A490u;
            return;
        }
    }
    ctx->pc = 0x18A4B4u;
    // 0x18a4b4: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x18a4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x18a4b8: 0x24636a40  addiu       $v1, $v1, 0x6A40
    ctx->pc = 0x18a4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27200));
    // 0x18a4bc: 0xae230060  sw          $v1, 0x60($s1)
    ctx->pc = 0x18a4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 3));
    // 0x18a4c0: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x18a4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x18a4c4: 0x2463c170  addiu       $v1, $v1, -0x3E90
    ctx->pc = 0x18a4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951280));
    // 0x18a4c8: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x18a4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
    // 0x18a4cc: 0x3c010057  lui         $at, 0x57
    ctx->pc = 0x18a4ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)87 << 16));
    // 0x18a4d0: 0xac206cf0  sw          $zero, 0x6CF0($at)
    ctx->pc = 0x18a4d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x576CF0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x576CF0u, _value); } while (0);
    // 0x18a4d4: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x18a4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x18a4d8: 0x24636d10  addiu       $v1, $v1, 0x6D10
    ctx->pc = 0x18a4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27920));
    // 0x18a4dc: 0x3c010057  lui         $at, 0x57
    ctx->pc = 0x18a4dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)87 << 16));
    // 0x18a4e0: 0xac236cf4  sw          $v1, 0x6CF4($at)
    ctx->pc = 0x18a4e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x576CF4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x576CF4u, _value); } while (0);
    // 0x18a4e4: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x18a4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x18a4e8: 0x2463bea0  addiu       $v1, $v1, -0x4160
    ctx->pc = 0x18a4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950560));
    // 0x18a4ec: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x18a4ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x18a4f0: 0xac23c420  sw          $v1, -0x3BE0($at)
    ctx->pc = 0x18a4f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x57C420u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x57C420u, _value); } while (0);
    // 0x18a4f4: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x18a4f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x18a4f8: 0xac20c424  sw          $zero, -0x3BDC($at)
    ctx->pc = 0x18a4f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x57C424u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x57C424u, _value); } while (0);
    // 0x18a4fc: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x18a4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x18a500: 0x24746d10  addiu       $s4, $v1, 0x6D10
    ctx->pc = 0x18a500u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 27920));
    // 0x18a504: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x18a504u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a508: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18A508u;
    {
        const bool branch_taken_0x18a508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a508) {
            ctx->pc = 0x18A528u;
            return;
        }
    }
    ctx->pc = 0x18A510u;
}
