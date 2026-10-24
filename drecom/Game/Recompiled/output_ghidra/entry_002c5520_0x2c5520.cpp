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

// Function: entry_002c5520
// Address: 0x2c5520 - 0x2c5574
void entry_002c5520_0x2c5520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c5520_0x2c5520");
#endif

    ctx->pc = 0x2c5520u;

    // 0x2c5520: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2c5520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2c5524: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c5524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c5528: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x2c5528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c552c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2c552cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2c5530: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2c5530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5534: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c5534u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c5538: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2c5538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x2c553c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2c553cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2c5540: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c5540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c5544: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x2c5544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c5548: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2c5548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2c554c: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2c554cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5550: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2c5550u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c5554: 0x0  nop
    ctx->pc = 0x2c5554u;
    // NOP
    // 0x2c5558: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x2C5558u;
    {
        const bool branch_taken_0x2c5558 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c5558) {
            ctx->pc = 0x2C5574u;
            return;
        }
    }
    ctx->pc = 0x2C5560u;
    // 0x2c5560: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2c5560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2c5564: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2c5564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c5568: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2c5568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2c556c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2c556cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2c5570: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x2c5570u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    ctx->pc = 0x2c5574u;
}
