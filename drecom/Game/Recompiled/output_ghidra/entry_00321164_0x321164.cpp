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

// Function: entry_00321164
// Address: 0x321164 - 0x321188
void entry_00321164_0x321164(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00321164_0x321164");
#endif

    ctx->pc = 0x321164u;

    // 0x321164: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x321164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x321168: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x321168u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x32116c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x32116cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x321170: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x321170u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x321174: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x321174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x321178: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x321178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x32117c: 0xe4600ac8  swc1        $f0, 0xAC8($v1)
    ctx->pc = 0x32117cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 2760), bits); }
    // 0x321180: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x321180u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x321184: 0x0  nop
    ctx->pc = 0x321184u;
    // NOP
    ctx->pc = 0x321188u;
}
