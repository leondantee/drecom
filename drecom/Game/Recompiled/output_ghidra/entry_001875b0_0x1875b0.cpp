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

// Function: entry_001875b0
// Address: 0x1875b0 - 0x1875d4
void entry_001875b0_0x1875b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001875b0_0x1875b0");
#endif

    ctx->pc = 0x1875b0u;

    // 0x1875b0: 0x938380ac  lbu         $v1, -0x7F54($gp)
    ctx->pc = 0x1875b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934700)));
    // 0x1875b4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1875b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1875b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1875b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1875bc: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1875BCu;
    {
        const bool branch_taken_0x1875bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1875bc) {
            ctx->pc = 0x1875D4u;
            return;
        }
    }
    ctx->pc = 0x1875C4u;
    // 0x1875c4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1875c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1875c8: 0xac200350  sw          $zero, 0x350($at)
    ctx->pc = 0x1875c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x480350u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x480350u, _value); } while (0);
    // 0x1875cc: 0x100000cc  b           . + 4 + (0xCC << 2)
    ctx->pc = 0x1875CCu;
    {
        const bool branch_taken_0x1875cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1875cc) {
            ctx->pc = 0x187900u;
            return;
        }
    }
    ctx->pc = 0x1875D4u;
}
