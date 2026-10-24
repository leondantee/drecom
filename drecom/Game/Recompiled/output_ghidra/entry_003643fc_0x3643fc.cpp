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

// Function: entry_003643fc
// Address: 0x3643fc - 0x364480
void entry_003643fc_0x3643fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003643fc_0x3643fc");
#endif

    ctx->pc = 0x3643fcu;

    // 0x3643fc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3643fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x364400: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x364400u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x364404: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x364404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x364408: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x364408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x36440c: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x36440Cu;
    {
        const bool branch_taken_0x36440c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36440c) {
            ctx->pc = 0x36452Cu;
            return;
        }
    }
    ctx->pc = 0x364414u;
    // 0x364414: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x364414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x364418: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x364418u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x36441c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36441cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x364420: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x364420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x364424: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x364424u;
    {
        const bool branch_taken_0x364424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x364424) {
            ctx->pc = 0x364480u;
            return;
        }
    }
    ctx->pc = 0x36442Cu;
    // 0x36442c: 0xc6010064  lwc1        $f1, 0x64($s0)
    ctx->pc = 0x36442cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x364430: 0x3c023bc9  lui         $v0, 0x3BC9
    ctx->pc = 0x364430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15305 << 16));
    // 0x364434: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x364434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x364438: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x364438u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36443c: 0x0  nop
    ctx->pc = 0x36443cu;
    // NOP
    // 0x364440: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x364440u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x364444: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x364444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x364448: 0xc6010064  lwc1        $f1, 0x64($s0)
    ctx->pc = 0x364448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36444c: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x36444cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x364450: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x364450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x364454: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x364454u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x364458: 0x0  nop
    ctx->pc = 0x364458u;
    // NOP
    // 0x36445c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x36445cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x364460: 0x0  nop
    ctx->pc = 0x364460u;
    // NOP
    // 0x364464: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x364464u;
    {
        const bool branch_taken_0x364464 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x364464) {
            ctx->pc = 0x364480u;
            return;
        }
    }
    ctx->pc = 0x36446Cu;
    // 0x36446c: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x36446cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x364470: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x364470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x364474: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x364474u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x364478: 0x0  nop
    ctx->pc = 0x364478u;
    // NOP
    // 0x36447c: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x36447cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    ctx->pc = 0x364480u;
}
