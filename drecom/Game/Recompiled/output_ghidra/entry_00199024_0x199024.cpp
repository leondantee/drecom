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

// Function: entry_00199024
// Address: 0x199024 - 0x199070
void entry_00199024_0x199024(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199024_0x199024");
#endif

    ctx->pc = 0x199024u;

    // 0x199024: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199028: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x199028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19902c: 0x3c0245da  lui         $v0, 0x45DA
    ctx->pc = 0x19902cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17882 << 16));
    // 0x199030: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x199030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x199034: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x199034u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x199038: 0x0  nop
    ctx->pc = 0x199038u;
    // NOP
    // 0x19903c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19903cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x199040: 0x0  nop
    ctx->pc = 0x199040u;
    // NOP
    // 0x199044: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x199044u;
    {
        const bool branch_taken_0x199044 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x199044) {
            ctx->pc = 0x199070u;
            return;
        }
    }
    ctx->pc = 0x19904Cu;
    // 0x19904c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x19904cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199050: 0xc4610184  lwc1        $f1, 0x184($v1)
    ctx->pc = 0x199050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x199054: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x199054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x199058: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x199058u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19905c: 0x0  nop
    ctx->pc = 0x19905cu;
    // NOP
    // 0x199060: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x199060u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x199064: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x199064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x199068: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x199068u;
    {
        const bool branch_taken_0x199068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199068) {
            ctx->pc = 0x19907Cu;
            return;
        }
    }
    ctx->pc = 0x199070u;
}
