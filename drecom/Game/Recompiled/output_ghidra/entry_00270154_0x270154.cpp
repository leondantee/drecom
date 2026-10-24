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

// Function: entry_00270154
// Address: 0x270154 - 0x2701a4
void entry_00270154_0x270154(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00270154_0x270154");
#endif

    ctx->pc = 0x270154u;

    // 0x270154: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270158: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x270158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27015c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27015cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x270160: 0x0  nop
    ctx->pc = 0x270160u;
    // NOP
    // 0x270164: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x270164u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270168: 0x0  nop
    ctx->pc = 0x270168u;
    // NOP
    // 0x27016c: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x27016Cu;
    {
        const bool branch_taken_0x27016c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27016c) {
            ctx->pc = 0x2701A4u;
            return;
        }
    }
    ctx->pc = 0x270174u;
    // 0x270174: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x270174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270178: 0xc4811284  lwc1        $f1, 0x1284($a0)
    ctx->pc = 0x270178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27017c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x27017cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270180: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x270180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270184: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x270184u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x270188: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x270188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x27018c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x27018cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270190: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x270190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270194: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270198: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x270198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27019c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x27019cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2701a0: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x2701a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    ctx->pc = 0x2701a4u;
}
