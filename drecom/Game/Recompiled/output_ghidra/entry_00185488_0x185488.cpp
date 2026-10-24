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

// Function: entry_00185488
// Address: 0x185488 - 0x1854ac
void entry_00185488_0x185488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185488_0x185488");
#endif

    ctx->pc = 0x185488u;

    // 0x185488: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x185488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18548c: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x18548cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x185490: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x185490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x185494: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185494u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185498: 0x0  nop
    ctx->pc = 0x185498u;
    // NOP
    // 0x18549c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18549cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1854a0: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x1854a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1854a4: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x1854A4u;
    {
        const bool branch_taken_0x1854a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1854a4) {
            ctx->pc = 0x1855C8u;
            return;
        }
    }
    ctx->pc = 0x1854ACu;
}
