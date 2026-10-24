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

// Function: entry_0028ce70
// Address: 0x28ce70 - 0x28ced0
void entry_0028ce70_0x28ce70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028ce70_0x28ce70");
#endif

    ctx->pc = 0x28ce70u;

    // 0x28ce70: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28ce70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28ce74: 0x8c2320e0  lw          $v1, 0x20E0($at)
    ctx->pc = 0x28ce74u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6220E0u));
    // 0x28ce78: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x28ce78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28ce7c: 0x1466028e  bne         $v1, $a2, . + 4 + (0x28E << 2)
    ctx->pc = 0x28CE7Cu;
    {
        const bool branch_taken_0x28ce7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x28ce7c) {
            ctx->pc = 0x28D8B8u;
            return;
        }
    }
    ctx->pc = 0x28CE84u;
    // 0x28ce84: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28ce84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28ce88: 0x8c2320f8  lw          $v1, 0x20F8($at)
    ctx->pc = 0x28ce88u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6220F8u));
    // 0x28ce8c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x28ce8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28ce90: 0x14660289  bne         $v1, $a2, . + 4 + (0x289 << 2)
    ctx->pc = 0x28CE90u;
    {
        const bool branch_taken_0x28ce90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x28ce90) {
            ctx->pc = 0x28D8B8u;
            return;
        }
    }
    ctx->pc = 0x28CE98u;
    // 0x28ce98: 0xa200663d  sb          $zero, 0x663D($s0)
    ctx->pc = 0x28ce98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26173), (uint8_t)GPR_U32(ctx, 0));
    // 0x28ce9c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28ce9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28cea0: 0xac2020e0  sw          $zero, 0x20E0($at)
    ctx->pc = 0x28cea0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6220E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6220E0u, _value); } while (0);
    // 0x28cea4: 0x8e035dd0  lw          $v1, 0x5DD0($s0)
    ctx->pc = 0x28cea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24016)));
    // 0x28cea8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x28cea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28ceac: 0xae035dd0  sw          $v1, 0x5DD0($s0)
    ctx->pc = 0x28ceacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24016), GPR_U32(ctx, 3));
    // 0x28ceb0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28ceb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28ceb4: 0xac2020d0  sw          $zero, 0x20D0($at)
    ctx->pc = 0x28ceb4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6220D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6220D0u, _value); } while (0);
    // 0x28ceb8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28ceb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28cebc: 0xac2020d8  sw          $zero, 0x20D8($at)
    ctx->pc = 0x28cebcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6220D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6220D8u, _value); } while (0);
    // 0x28cec0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28cec0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28cec4: 0xac2020f8  sw          $zero, 0x20F8($at)
    ctx->pc = 0x28cec4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6220F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6220F8u, _value); } while (0);
    // 0x28cec8: 0x1000027b  b           . + 4 + (0x27B << 2)
    ctx->pc = 0x28CEC8u;
    {
        const bool branch_taken_0x28cec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28cec8) {
            ctx->pc = 0x28D8B8u;
            return;
        }
    }
    ctx->pc = 0x28CED0u;
}
