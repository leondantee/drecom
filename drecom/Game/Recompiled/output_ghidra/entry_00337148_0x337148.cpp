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

// Function: entry_00337148
// Address: 0x337148 - 0x3371ec
void entry_00337148_0x337148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00337148_0x337148");
#endif

    ctx->pc = 0x337148u;

    // 0x337148: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x337148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x33714c: 0x24524c50  addiu       $s2, $v0, 0x4C50
    ctx->pc = 0x33714cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 19536));
    // 0x337150: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x337150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x337154: 0x24504d20  addiu       $s0, $v0, 0x4D20
    ctx->pc = 0x337154u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 19744));
    // 0x337158: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x337158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x33715c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x33715cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x894C50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x894C50u, _value); } while (0);
    // 0x337160: 0x3c028800  lui         $v0, 0x8800
    ctx->pc = 0x337160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34816 << 16));
    // 0x337164: 0x34423b14  ori         $v0, $v0, 0x3B14
    ctx->pc = 0x337164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15124);
    // 0x337168: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x337168u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x894C54u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x894C54u, _value); } while (0);
    // 0x33716c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33716cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x337170: 0x94224c44  lhu         $v0, 0x4C44($at)
    ctx->pc = 0x337170u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x894C44u));
    // 0x337174: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x337174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x337178: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33717c: 0x94224c40  lhu         $v0, 0x4C40($at)
    ctx->pc = 0x33717cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x894C40u));
    // 0x337180: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x337180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x337184: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x337184u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x337188: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x337188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
    // 0x33718c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33718cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x337190: 0x94224c46  lhu         $v0, 0x4C46($at)
    ctx->pc = 0x337190u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x894C46u));
    // 0x337194: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x337194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x337198: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33719c: 0x94224c42  lhu         $v0, 0x4C42($at)
    ctx->pc = 0x33719cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x894C42u));
    // 0x3371a0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3371a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3371a4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x3371a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3371a8: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x3371a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x3371ac: 0x24140100  addiu       $s4, $zero, 0x100
    ctx->pc = 0x3371acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3371b0: 0x241500e0  addiu       $s5, $zero, 0xE0
    ctx->pc = 0x3371b0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x3371b4: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x3371b4u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3371b8: 0x0  nop
    ctx->pc = 0x3371b8u;
    // NOP
    // 0x3371bc: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3371bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3371c0: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x3371c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x3371c4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3371c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x3371c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3371c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3371cc: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x3371ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x3371d0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3371D0u;
    {
        const bool branch_taken_0x3371d0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3371d0) {
            ctx->pc = 0x3371ECu;
            return;
        }
    }
    ctx->pc = 0x3371D8u;
    // 0x3371d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3371d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3371dc: 0x0  nop
    ctx->pc = 0x3371dcu;
    // NOP
    // 0x3371e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3371e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3371e4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3371E4u;
    {
        const bool branch_taken_0x3371e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3371e4) {
            ctx->pc = 0x337208u;
            return;
        }
    }
    ctx->pc = 0x3371ECu;
}
