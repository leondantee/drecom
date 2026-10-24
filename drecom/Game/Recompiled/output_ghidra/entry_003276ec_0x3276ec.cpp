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

// Function: entry_003276ec
// Address: 0x3276ec - 0x327710
void entry_003276ec_0x3276ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003276ec_0x3276ec");
#endif

    ctx->pc = 0x3276ecu;

    // 0x3276ec: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x3276ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3276f0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3276f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3276f4: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x3276f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x3276f8: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x3276f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x3276fc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3276fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x327700: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x327700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x327704: 0xe4600ac8  swc1        $f0, 0xAC8($v1)
    ctx->pc = 0x327704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 2760), bits); }
    // 0x327708: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x327708u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x32770c: 0x0  nop
    ctx->pc = 0x32770cu;
    // NOP
    ctx->pc = 0x327710u;
}
