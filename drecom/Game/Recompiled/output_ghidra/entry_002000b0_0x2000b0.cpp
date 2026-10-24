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

// Function: entry_002000b0
// Address: 0x2000b0 - 0x2000d8
void entry_002000b0_0x2000b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002000b0_0x2000b0");
#endif

    ctx->pc = 0x2000b0u;

    // 0x2000b0: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x2000b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2000b4: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x2000b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2000b8: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x2000b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2000bc: 0x3c043f66  lui         $a0, 0x3F66
    ctx->pc = 0x2000bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16230 << 16));
    // 0x2000c0: 0x34836666  ori         $v1, $a0, 0x6666
    ctx->pc = 0x2000c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26214);
    // 0x2000c4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2000c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2000c8: 0xc4a00ac8  lwc1        $f0, 0xAC8($a1)
    ctx->pc = 0x2000c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 2760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2000cc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2000ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2000d0: 0xe4a00ac8  swc1        $f0, 0xAC8($a1)
    ctx->pc = 0x2000d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 2760), bits); }
    // 0x2000d4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2000d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x2000d8u;
}
