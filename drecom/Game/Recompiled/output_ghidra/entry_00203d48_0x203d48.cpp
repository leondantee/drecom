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

// Function: entry_00203d48
// Address: 0x203d48 - 0x203d5c
void entry_00203d48_0x203d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203d48_0x203d48");
#endif

    ctx->pc = 0x203d48u;

    // 0x203d48: 0x3c02457a  lui         $v0, 0x457A
    ctx->pc = 0x203d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17786 << 16));
    // 0x203d4c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x203d4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x203d50: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x203d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x203d54: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x203d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x203d58: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x203d58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    ctx->pc = 0x203d5cu;
}
