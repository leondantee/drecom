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

// Function: entry_00303308
// Address: 0x303308 - 0x303320
void entry_00303308_0x303308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00303308_0x303308");
#endif

    ctx->pc = 0x303308u;

    // 0x303308: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x303308u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x30330c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x30330cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x303310: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x303310u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x303314: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x303314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x303318: 0x24631334  addiu       $v1, $v1, 0x1334
    ctx->pc = 0x303318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4916));
    // 0x30331c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x30331cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    ctx->pc = 0x303320u;
}
