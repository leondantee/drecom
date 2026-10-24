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

// Function: entry_00209aac
// Address: 0x209aac - 0x209b14
void entry_00209aac_0x209aac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00209aac_0x209aac");
#endif

    ctx->pc = 0x209aacu;

    // 0x209aac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x209aacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209ab0: 0x0  nop
    ctx->pc = 0x209ab0u;
    // NOP
    // 0x209ab4: 0xe60001a0  swc1        $f0, 0x1A0($s0)
    ctx->pc = 0x209ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 416), bits); }
    // 0x209ab8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x209ab8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209abc: 0x0  nop
    ctx->pc = 0x209abcu;
    // NOP
    // 0x209ac0: 0xe60001a4  swc1        $f0, 0x1A4($s0)
    ctx->pc = 0x209ac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 420), bits); }
    // 0x209ac4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x209ac4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209ac8: 0x0  nop
    ctx->pc = 0x209ac8u;
    // NOP
    // 0x209acc: 0xe60001a8  swc1        $f0, 0x1A8($s0)
    ctx->pc = 0x209accu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 424), bits); }
    // 0x209ad0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x209ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x209ad4: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x209ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x209ad8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x209ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x209adc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x209adcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x209ae0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x209ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x209ae4: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x209ae4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x209ae8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x209ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x209aec: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x209aecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x209af0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x209af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x209af4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x209af4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x209af8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x209af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x209afc: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x209afcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x209b00: 0x3c02ffdf  lui         $v0, 0xFFDF
    ctx->pc = 0x209b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65503 << 16));
    // 0x209b04: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x209b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x209b08: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x209b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x209b0c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x209b0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x209b10: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x209b10u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    ctx->pc = 0x209b14u;
}
