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

// Function: entry_001ce910
// Address: 0x1ce910 - 0x1ce954
void entry_001ce910_0x1ce910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce910_0x1ce910");
#endif

    ctx->pc = 0x1ce910u;

    // 0x1ce910: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ce910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ce914: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x1ce914u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x1ce918: 0x34650040  ori         $a1, $v1, 0x40
    ctx->pc = 0x1ce918u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x1ce91c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ce91cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ce920: 0xac251a64  sw          $a1, 0x1A64($at)
    ctx->pc = 0x1ce920u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x5D1A64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A64u, _value); } while (0);
    // 0x1ce924: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x1ce924u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ce928: 0x8cc713e8  lw          $a3, 0x13E8($a2)
    ctx->pc = 0x1ce928u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 5096)));
    // 0x1ce92c: 0x10e00009  beqz        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CE92Cu;
    {
        const bool branch_taken_0x1ce92c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce92c) {
            ctx->pc = 0x1CE954u;
            return;
        }
    }
    ctx->pc = 0x1CE934u;
    // 0x1ce934: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ce934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ce938: 0x8c281a98  lw          $t0, 0x1A98($at)
    ctx->pc = 0x1ce938u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1ce93c: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x1ce93cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x1ce940: 0x1032825  or          $a1, $t0, $v1
    ctx->pc = 0x1ce940u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1ce944: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ce944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ce948: 0xac251a98  sw          $a1, 0x1A98($at)
    ctx->pc = 0x1ce948u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x1ce94c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ce94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ce950: 0xa0601921  sb          $zero, 0x1921($v1)
    ctx->pc = 0x1ce950u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6433), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1ce954u;
}
