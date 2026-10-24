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

// Function: entry_00224278
// Address: 0x224278 - 0x224294
void entry_00224278_0x224278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00224278_0x224278");
#endif

    ctx->pc = 0x224278u;

    // 0x224278: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22427c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22427cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x224280: 0xc461002c  lwc1        $f1, 0x2C($v1)
    ctx->pc = 0x224280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224284: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x224288: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x224288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22428c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22428cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x224290: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x224290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    ctx->pc = 0x224294u;
}
