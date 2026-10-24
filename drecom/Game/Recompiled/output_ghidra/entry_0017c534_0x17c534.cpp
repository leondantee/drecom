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

// Function: entry_0017c534
// Address: 0x17c534 - 0x17c564
void entry_0017c534_0x17c534(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c534_0x17c534");
#endif

    switch (ctx->pc) {
        case 0x17c548u: goto label_17c548;
        case 0x17c55cu: goto label_17c55c;
        default: break;
    }

    ctx->pc = 0x17c534u;

    // 0x17c534: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x17c534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x17c538: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x17c538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x17c53c: 0xc7ac00dc  lwc1        $f12, 0xDC($sp)
    ctx->pc = 0x17c53cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17c540: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x17C540u;
    SET_GPR_U32(ctx, 31, 0x17C548u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x17C548u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17C548u) { return; }
    ctx->pc = 0x17C548u;
label_17c548:
    // 0x17c548: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x17c548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x17c54c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x17c54cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x17c550: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x17c550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17c554: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x17C554u;
    SET_GPR_U32(ctx, 31, 0x17C55Cu);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x17C55Cu;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17C55Cu) { return; }
    ctx->pc = 0x17C55Cu;
label_17c55c:
    // 0x17c55c: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x17c55cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c560: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x17c560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    ctx->pc = 0x17c564u;
}
