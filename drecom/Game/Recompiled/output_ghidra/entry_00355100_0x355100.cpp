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

// Function: entry_00355100
// Address: 0x355100 - 0x355168
void entry_00355100_0x355100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00355100_0x355100");
#endif

    ctx->pc = 0x355100u;

    // 0x355100: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x355100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x355104: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x355104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x355108: 0xc600012c  lwc1        $f0, 0x12C($s0)
    ctx->pc = 0x355108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35510c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x35510cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x355110: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x355110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x355114: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x355114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x355118: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x355118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35511c: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x35511cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355120: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x355120u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x355124: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x355124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x355128: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x355128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x35512c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x35512cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x355130: 0xc6000130  lwc1        $f0, 0x130($s0)
    ctx->pc = 0x355130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355134: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x355134u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x355138: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x355138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x35513c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x35513cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x355140: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x355140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x355144: 0xc600012c  lwc1        $f0, 0x12C($s0)
    ctx->pc = 0x355144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355148: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x355148u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35514c: 0x0  nop
    ctx->pc = 0x35514cu;
    // NOP
    // 0x355150: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x355150u;
    {
        const bool branch_taken_0x355150 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x355150) {
            ctx->pc = 0x355168u;
            return;
        }
    }
    ctx->pc = 0x355158u;
    // 0x355158: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x355158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x35515c: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x35515cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355160: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x355160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x355164: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x355164u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x355168u;
}
