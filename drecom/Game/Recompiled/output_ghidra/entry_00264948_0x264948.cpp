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

// Function: entry_00264948
// Address: 0x264948 - 0x264998
void entry_00264948_0x264948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00264948_0x264948");
#endif

    ctx->pc = 0x264948u;

    // 0x264948: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x264948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x26494c: 0x8fa3010c  lw          $v1, 0x10C($sp)
    ctx->pc = 0x26494cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x264950: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x264950u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x264954: 0x1460feb8  bnez        $v1, . + 4 + (-0x148 << 2)
    ctx->pc = 0x264954u;
    {
        const bool branch_taken_0x264954 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x264954) {
            ctx->pc = 0x264438u;
            return;
        }
    }
    ctx->pc = 0x26495Cu;
    // 0x26495c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x26495cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x264960: 0xac34e680  sw          $s4, -0x1980($at)
    ctx->pc = 0x264960u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 20)); ps2TraceGuestWrite(rdram, 0x61E680u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E680u, _value); } while (0);
    // 0x264964: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x264964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x264968: 0xac35e67c  sw          $s5, -0x1984($at)
    ctx->pc = 0x264968u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 21)); ps2TraceGuestWrite(rdram, 0x61E67Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E67Cu, _value); } while (0);
    // 0x26496c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x26496cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x264970: 0x9023e650  lbu         $v1, -0x19B0($at)
    ctx->pc = 0x264970u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x61E650u));
    // 0x264974: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x264974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x264978: 0xa023e652  sb          $v1, -0x19AE($at)
    ctx->pc = 0x264978u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x61E652u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x61E652u, _value); } while (0);
    // 0x26497c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x26497cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x264980: 0x9024e650  lbu         $a0, -0x19B0($at)
    ctx->pc = 0x264980u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x61E650u));
    // 0x264984: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x264984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x264988: 0x9023e651  lbu         $v1, -0x19AF($at)
    ctx->pc = 0x264988u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x61E651u));
    // 0x26498c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x26498cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x264990: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x264990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x264994: 0xa023e650  sb          $v1, -0x19B0($at)
    ctx->pc = 0x264994u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x61E650u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x61E650u, _value); } while (0);
    ctx->pc = 0x264998u;
}
