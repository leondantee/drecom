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

// Function: Camera_transration2
// Address: 0x1830c0 - 0x1832e8
void Camera_transration2_0x1830c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Camera_transration2_0x1830c0");
#endif

    switch (ctx->pc) {
        case 0x183100u: goto label_183100;
        case 0x18317cu: goto label_18317c;
        case 0x18322cu: goto label_18322c;
        case 0x1832ccu: goto label_1832cc;
        case 0x1832d8u: goto label_1832d8;
        default: break;
    }

    ctx->pc = 0x1830c0u;

    // 0x1830c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1830c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1830c4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x1830c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1830c8: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1830c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x1830cc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1830ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1830d0: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x1830d0u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x1830d4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1830d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1830d8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1830d8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1830dc: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1830dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1830e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1830e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1830e4: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x1830e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1830e8: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x1830e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x1830ec: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x1830ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x1830f0: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1830f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1830f4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1830f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1830f8: 0xc05ec8c  jal         func_17B230
    ctx->pc = 0x1830F8u;
    SET_GPR_U32(ctx, 31, 0x183100u);
    ctx->pc = 0x17B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B230u, 0x1830F8u, 0x183100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183100u;
label_183100:
    // 0x183100: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x183100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x183104: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x183104u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x183108: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x183108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x18310c: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x18310cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x183110: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x183110u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x183114: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x183114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x183118: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x183118u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x18311c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x18311cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x183120: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x183120u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x183124: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x183124u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x183128: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x183128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18312c: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x18312cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x183130: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x183130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x183134: 0x24420380  addiu       $v0, $v0, 0x380
    ctx->pc = 0x183134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 896));
    // 0x183138: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x183138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18313c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18313cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x183140: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x183140u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x183144: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x183144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x183148: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x183148u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x18314c: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x18314cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x183150: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x183150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x183154: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x183154u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x183158: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x183158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x18315c: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x18315cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x183160: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x183160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x183164: 0x90420154  lbu         $v0, 0x154($v0)
    ctx->pc = 0x183164u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 340)));
    // 0x183168: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x183168u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18316c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x18316cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x183170: 0x27a70024  addiu       $a3, $sp, 0x24
    ctx->pc = 0x183170u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x183174: 0xc05ef38  jal         func_17BCE0
    ctx->pc = 0x183174u;
    SET_GPR_U32(ctx, 31, 0x18317Cu);
    ctx->pc = 0x17BCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BCE0u, 0x183174u, 0x18317Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18317Cu;
label_18317c:
    // 0x18317c: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x18317cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x183180: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x183180u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x183184: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x183184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x183188: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x183188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x18318c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x18318cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x183190: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x183190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x183194: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x183194u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x183198: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x183198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18319c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x18319cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1831a0: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1831a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1831a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1831a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1831a8: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x1831a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1831ac: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x1831acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x1831b0: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x1831b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x1831b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1831b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1831b8: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1831b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1831bc: 0xc4400168  lwc1        $f0, 0x168($v0)
    ctx->pc = 0x1831bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1831c0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1831c0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1831c4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1831c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1831c8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1831c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1831cc: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x1831ccu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x1831d0: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1831d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1831d4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1831d4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1831d8: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x1831d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1831dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1831dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1831e0: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x1831e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1831e4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1831e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1831e8: 0x24420380  addiu       $v0, $v0, 0x380
    ctx->pc = 0x1831e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 896));
    // 0x1831ec: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1831ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1831f0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1831f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1831f4: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x1831f4u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x1831f8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1831f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1831fc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1831fcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x183200: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x183200u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x183204: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x183204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x183208: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x183208u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x18320c: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x18320cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x183210: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x183210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x183214: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x183214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x183218: 0x90420154  lbu         $v0, 0x154($v0)
    ctx->pc = 0x183218u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 340)));
    // 0x18321c: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x18321cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x183220: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x183220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x183224: 0xc05f2cc  jal         func_17CB30
    ctx->pc = 0x183224u;
    SET_GPR_U32(ctx, 31, 0x18322Cu);
    ctx->pc = 0x17CB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CB30u, 0x183224u, 0x18322Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18322Cu;
label_18322c:
    // 0x18322c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x18322cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x183230: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x183230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x183234: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x183234u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x183238: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x183238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18323c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x18323cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x183240: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x183240u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x183244: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x183244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x183248: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x183248u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x18324c: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x18324cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x183250: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x183250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x183254: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x183254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x183258: 0x8c420164  lw          $v0, 0x164($v0)
    ctx->pc = 0x183258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 356)));
    // 0x18325c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18325cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x183260: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x183260u;
    {
        const bool branch_taken_0x183260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x183260) {
            ctx->pc = 0x183298u;
            goto label_183298;
        }
    }
    ctx->pc = 0x183268u;
    // 0x183268: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x183268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18326c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x18326cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x183270: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x183270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x183274: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x183274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x183278: 0x8c4200b8  lw          $v0, 0xB8($v0)
    ctx->pc = 0x183278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x18327c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x18327Cu;
    {
        const bool branch_taken_0x18327c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18327c) {
            ctx->pc = 0x1832C0u;
            goto label_1832c0;
        }
    }
    ctx->pc = 0x183284u;
    // 0x183284: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x183284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x183288: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x183288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x18328c: 0xac4300b8  sw          $v1, 0xB8($v0)
    ctx->pc = 0x18328cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 184), GPR_U32(ctx, 3));
    // 0x183290: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x183290u;
    {
        const bool branch_taken_0x183290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x183290) {
            ctx->pc = 0x1832C0u;
            goto label_1832c0;
        }
    }
    ctx->pc = 0x183298u;
label_183298:
    // 0x183298: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x183298u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18329c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x18329cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1832a0: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x1832a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x1832a4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1832a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1832a8: 0x8c4200b8  lw          $v0, 0xB8($v0)
    ctx->pc = 0x1832a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x1832ac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1832ACu;
    {
        const bool branch_taken_0x1832ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1832ac) {
            ctx->pc = 0x1832C0u;
            goto label_1832c0;
        }
    }
    ctx->pc = 0x1832B4u;
    // 0x1832b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1832b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1832b8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1832b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1832bc: 0xac4300b8  sw          $v1, 0xB8($v0)
    ctx->pc = 0x1832bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 184), GPR_U32(ctx, 3));
label_1832c0:
    // 0x1832c0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1832c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1832c4: 0xc05f8f8  jal         func_17E3E0
    ctx->pc = 0x1832C4u;
    SET_GPR_U32(ctx, 31, 0x1832CCu);
    ctx->pc = 0x17E3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E3E0u, 0x1832C4u, 0x1832CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1832CCu;
label_1832cc:
    // 0x1832cc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1832ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1832d0: 0xc05f910  jal         func_17E440
    ctx->pc = 0x1832D0u;
    SET_GPR_U32(ctx, 31, 0x1832D8u);
    ctx->pc = 0x17E440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E440u, 0x1832D0u, 0x1832D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1832D8u;
label_1832d8:
    // 0x1832d8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1832d8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1832dc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1832dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1832e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1832E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1832E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1832E8u;
}
