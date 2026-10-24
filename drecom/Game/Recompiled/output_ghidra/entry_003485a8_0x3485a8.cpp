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

// Function: entry_003485a8
// Address: 0x3485a8 - 0x348698
void entry_003485a8_0x3485a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003485a8_0x3485a8");
#endif

    switch (ctx->pc) {
        case 0x3485d4u: goto label_3485d4;
        default: break;
    }

    ctx->pc = 0x3485a8u;

    // 0x3485a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3485a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3485ac: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x3485acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x3485b0: 0xa0440002  sb          $a0, 0x2($v0)
    ctx->pc = 0x3485b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x3485b4: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x3485b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x3485b8: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x3485b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x3485bc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x3485bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x3485c0: 0x24061e16  addiu       $a2, $zero, 0x1E16
    ctx->pc = 0x3485c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7702));
    // 0x3485c4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3485c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3485c8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3485c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3485cc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x3485CCu;
    SET_GPR_U32(ctx, 31, 0x3485D4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3485CCu, 0x3485D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3485D4u;
label_3485d4:
    // 0x3485d4: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x3485d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x3485d8: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x3485d8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x3485dc: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x3485dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x3485e0: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x3485e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x3485e4: 0x24520960  addiu       $s2, $v0, 0x960
    ctx->pc = 0x3485e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 2400));
    // 0x3485e8: 0x26420150  addiu       $v0, $s2, 0x150
    ctx->pc = 0x3485e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
    // 0x3485ec: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3485ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3485f0: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x3485f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x3485f4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3485f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3485f8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3485f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3485fc: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x3485fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348600: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x348600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x348604: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x348604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x348608: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x348608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x34860c: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x34860cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x348610: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x348610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348614: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x348614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x348618: 0xa040006e  sb          $zero, 0x6E($v0)
    ctx->pc = 0x348618u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x34861c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x34861cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x348620: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x348620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348624: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x348624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x348628: 0xa043006f  sb          $v1, 0x6F($v0)
    ctx->pc = 0x348628u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 111), (uint8_t)GPR_U32(ctx, 3));
    // 0x34862c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x34862cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x348630: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x348630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348634: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x348634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x348638: 0xa0620072  sb          $v0, 0x72($v1)
    ctx->pc = 0x348638u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 114), (uint8_t)GPR_U32(ctx, 2));
    // 0x34863c: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x34863cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348640: 0x245010b0  addiu       $s0, $v0, 0x10B0
    ctx->pc = 0x348640u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x348644: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x348644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x348648: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x348648u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34864c: 0x0  nop
    ctx->pc = 0x34864cu;
    // NOP
    // 0x348650: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x348650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x348654: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x348654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x348658: 0x3c04c416  lui         $a0, 0xC416
    ctx->pc = 0x348658u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50198 << 16));
    // 0x34865c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x34865cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348660: 0x0  nop
    ctx->pc = 0x348660u;
    // NOP
    // 0x348664: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x348664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x348668: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x348668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x34866c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x34866cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x348670: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x348670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x348674: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x348674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x348678: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x348678u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x34867c: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x34867cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348680: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x348680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x348684: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x348684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x348688: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x348688u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34868c: 0xc4800188  lwc1        $f0, 0x188($a0)
    ctx->pc = 0x34868cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x348690: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x348690u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x348694: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x348694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
    ctx->pc = 0x348698u;
}
