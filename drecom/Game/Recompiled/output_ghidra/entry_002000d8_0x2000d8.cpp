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

// Function: entry_002000d8
// Address: 0x2000d8 - 0x20016c
void entry_002000d8_0x2000d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002000d8_0x2000d8");
#endif

    ctx->pc = 0x2000d8u;

    // 0x2000d8: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x2000d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2000dc: 0x90830344  lbu         $v1, 0x344($a0)
    ctx->pc = 0x2000dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 836)));
    // 0x2000e0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2000e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2000e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2000e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2000e8: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x2000e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2000ec: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2000ECu;
    {
        const bool branch_taken_0x2000ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2000ec) {
            ctx->pc = 0x2000B0u;
            return;
        }
    }
    ctx->pc = 0x2000F4u;
    // 0x2000f4: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x2000f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2000f8: 0x3c053f5e  lui         $a1, 0x3F5E
    ctx->pc = 0x2000f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16222 << 16));
    // 0x2000fc: 0x34a3b852  ori         $v1, $a1, 0xB852
    ctx->pc = 0x2000fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)47186);
    // 0x200100: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x200100u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x200104: 0xc48002d0  lwc1        $f0, 0x2D0($a0)
    ctx->pc = 0x200104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200108: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x200108u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x20010c: 0xe48002d0  swc1        $f0, 0x2D0($a0)
    ctx->pc = 0x20010cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 720), bits); }
    // 0x200110: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x200110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x200114: 0x3c123f5e  lui         $s2, 0x3F5E
    ctx->pc = 0x200114u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)16222 << 16));
    // 0x200118: 0x3643b852  ori         $v1, $s2, 0xB852
    ctx->pc = 0x200118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)47186);
    // 0x20011c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x20011cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x200120: 0xc48002d4  lwc1        $f0, 0x2D4($a0)
    ctx->pc = 0x200120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200124: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x200124u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x200128: 0xe48002d4  swc1        $f0, 0x2D4($a0)
    ctx->pc = 0x200128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 724), bits); }
    // 0x20012c: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x20012cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x200130: 0x3c033f5e  lui         $v1, 0x3F5E
    ctx->pc = 0x200130u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16222 << 16));
    // 0x200134: 0x3465b852  ori         $a1, $v1, 0xB852
    ctx->pc = 0x200134u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)47186);
    // 0x200138: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x200138u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20013c: 0xc48002d8  lwc1        $f0, 0x2D8($a0)
    ctx->pc = 0x20013cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200140: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x200140u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x200144: 0xe48002d8  swc1        $f0, 0x2D8($a0)
    ctx->pc = 0x200144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 728), bits); }
    // 0x200148: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x200148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x20014c: 0x3c053f5e  lui         $a1, 0x3F5E
    ctx->pc = 0x20014cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16222 << 16));
    // 0x200150: 0x34a4b852  ori         $a0, $a1, 0xB852
    ctx->pc = 0x200150u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)47186);
    // 0x200154: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x200154u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x200158: 0xc46002dc  lwc1        $f0, 0x2DC($v1)
    ctx->pc = 0x200158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20015c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x20015cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x200160: 0xe46002dc  swc1        $f0, 0x2DC($v1)
    ctx->pc = 0x200160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 732), bits); }
    // 0x200164: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x200164u;
    {
        const bool branch_taken_0x200164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x200164) {
            ctx->pc = 0x20019Cu;
            return;
        }
    }
    ctx->pc = 0x20016Cu;
}
