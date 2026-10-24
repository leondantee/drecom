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

// Function: entry_00172720
// Address: 0x172720 - 0x172734
void entry_00172720_0x172720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172720_0x172720");
#endif

    ctx->pc = 0x172720u;

    // 0x172720: 0x3c03bfc9  lui         $v1, 0xBFC9
    ctx->pc = 0x172720u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49097 << 16));
    // 0x172724: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x172724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x172728: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x172728u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17272c: 0x0  nop
    ctx->pc = 0x17272cu;
    // NOP
    // 0x172730: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x172730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    ctx->pc = 0x172734u;
}
