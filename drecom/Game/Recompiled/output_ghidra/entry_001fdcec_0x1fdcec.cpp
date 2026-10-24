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

// Function: entry_001fdcec
// Address: 0x1fdcec - 0x1fdd24
void entry_001fdcec_0x1fdcec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fdcec_0x1fdcec");
#endif

    ctx->pc = 0x1fdcecu;

    // 0x1fdcec: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1fdcecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fdcf0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1fdcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fdcf4: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1fdcf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fdcf8: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x1fdcf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1fdcfc: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1fdcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x1fdd00: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1fdd00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1fdd04: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1fdd04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fdd08: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FDD08u;
    {
        const bool branch_taken_0x1fdd08 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x1fdd08) {
            ctx->pc = 0x1FDD24u;
            return;
        }
    }
    ctx->pc = 0x1FDD10u;
    // 0x1fdd10: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1fdd10u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fdd14: 0x0  nop
    ctx->pc = 0x1fdd14u;
    // NOP
    // 0x1fdd18: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1fdd18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1fdd1c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FDD1Cu;
    {
        const bool branch_taken_0x1fdd1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdd1c) {
            ctx->pc = 0x1FDD40u;
            return;
        }
    }
    ctx->pc = 0x1FDD24u;
}
