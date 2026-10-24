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

// Function: entry_002a8ea8
// Address: 0x2a8ea8 - 0x2a8f10
void entry_002a8ea8_0x2a8ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a8ea8_0x2a8ea8");
#endif

    ctx->pc = 0x2a8ea8u;

    // 0x2a8ea8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2a8ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a8eac: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a8eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a8eb0: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2a8eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2a8eb4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2A8EB4u;
    {
        const bool branch_taken_0x2a8eb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8eb4) {
            ctx->pc = 0x2A8F10u;
            return;
        }
    }
    ctx->pc = 0x2A8EBCu;
    // 0x2a8ebc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2a8ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a8ec0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a8ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a8ec4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2a8ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2a8ec8: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x2a8ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8ecc: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2a8eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8ed0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a8ed0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a8ed4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2a8ed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2a8ed8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2a8ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a8edc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a8edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a8ee0: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2a8ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2a8ee4: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x2a8ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8ee8: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x2a8ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8eec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a8eecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a8ef0: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2a8ef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2a8ef4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2a8ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a8ef8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a8ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a8efc: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2a8efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2a8f00: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x2a8f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8f04: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2a8f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8f08: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a8f08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a8f0c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2a8f0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->pc = 0x2a8f10u;
}
