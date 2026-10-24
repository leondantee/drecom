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

// Function: entry_0034e190
// Address: 0x34e190 - 0x34e2ec
void entry_0034e190_0x34e190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034e190_0x34e190");
#endif

    switch (ctx->pc) {
        case 0x34e1a4u: goto label_34e1a4;
        case 0x34e1b4u: goto label_34e1b4;
        case 0x34e1c8u: goto label_34e1c8;
        case 0x34e1dcu: goto label_34e1dc;
        default: break;
    }

    ctx->pc = 0x34e190u;

    // 0x34e190: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34e190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e194: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x34e194u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34e198: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x34e198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x34e19c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x34E19Cu;
    SET_GPR_U32(ctx, 31, 0x34E1A4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x34E19Cu, 0x34E1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E1A4u;
label_34e1a4:
    // 0x34e1a4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34e1a4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34e1a8: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x34e1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e1ac: 0xc05cd10  jal         func_173440
    ctx->pc = 0x34E1ACu;
    SET_GPR_U32(ctx, 31, 0x34E1B4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x34E1ACu, 0x34E1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E1B4u;
label_34e1b4:
    // 0x34e1b4: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34e1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e1b8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x34e1b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34e1bc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34e1bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34e1c0: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x34E1C0u;
    SET_GPR_U32(ctx, 31, 0x34E1C8u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x34E1C0u, 0x34E1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E1C8u;
label_34e1c8:
    // 0x34e1c8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x34e1c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34e1cc: 0x8fa500f8  lw          $a1, 0xF8($sp)
    ctx->pc = 0x34e1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e1d0: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x34e1d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x34e1d4: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x34E1D4u;
    SET_GPR_U32(ctx, 31, 0x34E1DCu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x34E1D4u, 0x34E1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E1DCu;
label_34e1dc:
    // 0x34e1dc: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x34e1dcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34e1e0: 0x8fa700f8  lw          $a3, 0xF8($sp)
    ctx->pc = 0x34e1e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e1e4: 0x84e81278  lh          $t0, 0x1278($a3)
    ctx->pc = 0x34e1e4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4728)));
    // 0x34e1e8: 0x2503ffff  addiu       $v1, $t0, -0x1
    ctx->pc = 0x34e1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x34e1ec: 0xa4e31278  sh          $v1, 0x1278($a3)
    ctx->pc = 0x34e1ecu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x34e1f0: 0x150000f1  bnez        $t0, . + 4 + (0xF1 << 2)
    ctx->pc = 0x34E1F0u;
    {
        const bool branch_taken_0x34e1f0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x34e1f0) {
            ctx->pc = 0x34E5B8u;
            return;
        }
    }
    ctx->pc = 0x34E1F8u;
    // 0x34e1f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34e1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34e1fc: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34e1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e200: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x34e200u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x34e204: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34e204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34e208: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34e208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e20c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x34e20cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x34e210: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34e210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e214: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x34e214u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x34e218: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34e218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e21c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x34e21cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x34e220: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34e220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e224: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x34e224u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x34e228: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x34e228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x34e22c: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34e22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e230: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34e230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34e234: 0xa4440068  sh          $a0, 0x68($v0)
    ctx->pc = 0x34e234u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 104), (uint16_t)GPR_U32(ctx, 4));
    // 0x34e238: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34e238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e23c: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x34e23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x34e240: 0x24440960  addiu       $a0, $v0, 0x960
    ctx->pc = 0x34e240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2400));
    // 0x34e244: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x34e244u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x34e248: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x34e248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34e24c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x34e24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x34e250: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x34e250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x34e254: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x34e254u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x34e258: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x34e258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e25c: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x34e25cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x34e260: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x34e260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x34e264: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x34e264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x34e268: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x34e268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x34e26c: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x34e26cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x34e270: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34e270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e274: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34e274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34e278: 0xa4400034  sh          $zero, 0x34($v0)
    ctx->pc = 0x34e278u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 52), (uint16_t)GPR_U32(ctx, 0));
    // 0x34e27c: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34e27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e280: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x34e280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34e284: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x34e284u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x34e288: 0x2406ffef  addiu       $a2, $zero, -0x11
    ctx->pc = 0x34e288u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x34e28c: 0xa61024  and         $v0, $a1, $a2
    ctx->pc = 0x34e28cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x34e290: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x34e290u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x34e294: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x34e294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x34e298: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34e298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e29c: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x34e29cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x34e2a0: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34e2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e2a4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34e2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34e2a8: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x34e2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x34e2ac: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x34e2acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x34e2b0: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x34E2B0u;
    {
        const bool branch_taken_0x34e2b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e2b0) {
            ctx->pc = 0x34E2ECu;
            return;
        }
    }
    ctx->pc = 0x34E2B8u;
    // 0x34e2b8: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34e2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e2bc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34e2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34e2c0: 0xa060006e  sb          $zero, 0x6E($v1)
    ctx->pc = 0x34e2c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x34e2c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34e2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34e2c8: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34e2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e2cc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34e2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34e2d0: 0xa064006f  sb          $a0, 0x6F($v1)
    ctx->pc = 0x34e2d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 111), (uint8_t)GPR_U32(ctx, 4));
    // 0x34e2d4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x34e2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34e2d8: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34e2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e2dc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34e2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34e2e0: 0xa0640072  sb          $a0, 0x72($v1)
    ctx->pc = 0x34e2e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 114), (uint8_t)GPR_U32(ctx, 4));
    // 0x34e2e4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x34E2E4u;
    {
        const bool branch_taken_0x34e2e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e2e4) {
            ctx->pc = 0x34E314u;
            return;
        }
    }
    ctx->pc = 0x34E2ECu;
}
