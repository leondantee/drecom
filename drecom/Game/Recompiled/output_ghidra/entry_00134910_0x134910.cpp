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

// Function: entry_00134910
// Address: 0x134910 - 0x134968
void entry_00134910_0x134910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134910_0x134910");
#endif

    ctx->pc = 0x134910u;

    // 0x134910: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134914: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x134914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134918: 0xc46102ac  lwc1        $f1, 0x2AC($v1)
    ctx->pc = 0x134918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13491c: 0x3c03bd4c  lui         $v1, 0xBD4C
    ctx->pc = 0x13491cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48460 << 16));
    // 0x134920: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x134920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x134924: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x134924u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134928: 0x0  nop
    ctx->pc = 0x134928u;
    // NOP
    // 0x13492c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13492cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x134930: 0x0  nop
    ctx->pc = 0x134930u;
    // NOP
    // 0x134934: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x134934u;
    {
        const bool branch_taken_0x134934 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x134934) {
            ctx->pc = 0x134968u;
            return;
        }
    }
    ctx->pc = 0x13493Cu;
    // 0x13493c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x13493cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134940: 0x8c6402d0  lw          $a0, 0x2D0($v1)
    ctx->pc = 0x134940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134944: 0xc48102ac  lwc1        $f1, 0x2AC($a0)
    ctx->pc = 0x134944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134948: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x134948u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x13494c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x13494cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x134950: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x134950u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134954: 0x0  nop
    ctx->pc = 0x134954u;
    // NOP
    // 0x134958: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x134958u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x13495c: 0xe48002ac  swc1        $f0, 0x2AC($a0)
    ctx->pc = 0x13495cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 684), bits); }
    // 0x134960: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x134960u;
    {
        const bool branch_taken_0x134960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134960) {
            ctx->pc = 0x134978u;
            return;
        }
    }
    ctx->pc = 0x134968u;
}
