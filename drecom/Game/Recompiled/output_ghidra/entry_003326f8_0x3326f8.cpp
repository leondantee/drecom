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

// Function: entry_003326f8
// Address: 0x3326f8 - 0x33271c
void entry_003326f8_0x3326f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003326f8_0x3326f8");
#endif

    ctx->pc = 0x3326f8u;

    // 0x3326f8: 0xae206870  sw          $zero, 0x6870($s1)
    ctx->pc = 0x3326f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 26736), GPR_U32(ctx, 0));
    // 0x3326fc: 0x3c168000  lui         $s6, 0x8000
    ctx->pc = 0x3326fcu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)32768 << 16));
    // 0x332700: 0xae360120  sw          $s6, 0x120($s1)
    ctx->pc = 0x332700u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 22));
    // 0x332704: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x332704u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x332708: 0xae260520  sw          $a2, 0x520($s1)
    ctx->pc = 0x332708u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1312), GPR_U32(ctx, 6));
    // 0x33270c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33270cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x332710: 0xac202780  sw          $zero, 0x2780($at)
    ctx->pc = 0x332710u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x892780u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x892780u, _value); } while (0);
    // 0x332714: 0x100000e0  b           . + 4 + (0xE0 << 2)
    ctx->pc = 0x332714u;
    {
        const bool branch_taken_0x332714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x332714) {
            ctx->pc = 0x332A98u;
            return;
        }
    }
    ctx->pc = 0x33271Cu;
}
