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

// Function: entry_00112608
// Address: 0x112608 - 0x112630
void entry_00112608_0x112608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112608_0x112608");
#endif

    ctx->pc = 0x112608u;

    // 0x112608: 0x101dc3  sra         $v1, $s0, 23
    ctx->pc = 0x112608u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 16), 23));
    // 0x11260c: 0x2466ff7a  addiu       $a2, $v1, -0x86
    ctx->pc = 0x11260cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967162));
    // 0x112610: 0x615c0  sll         $v0, $a2, 23
    ctx->pc = 0x112610u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 23));
    // 0x112614: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x112614u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x112618: 0x44906000  mtc1        $s0, $f12
    ctx->pc = 0x112618u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11261c: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x11261cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x112620: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x112620u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x112624: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x112624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x112628: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x112628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11262c: 0x0  nop
    ctx->pc = 0x11262cu;
    // NOP
    ctx->pc = 0x112630u;
}
