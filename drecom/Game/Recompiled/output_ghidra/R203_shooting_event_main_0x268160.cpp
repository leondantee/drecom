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

// Function: R203_shooting_event_main
// Address: 0x268160 - 0x26843c
void R203_shooting_event_main_0x268160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R203_shooting_event_main_0x268160");
#endif

    switch (ctx->pc) {
        case 0x2681ccu: goto label_2681cc;
        case 0x26820cu: goto label_26820c;
        case 0x268218u: goto label_268218;
        case 0x268274u: goto label_268274;
        case 0x268280u: goto label_268280;
        case 0x2682dcu: goto label_2682dc;
        case 0x2682e8u: goto label_2682e8;
        case 0x2682f4u: goto label_2682f4;
        case 0x268338u: goto label_268338;
        case 0x26834cu: goto label_26834c;
        case 0x268398u: goto label_268398;
        case 0x268400u: goto label_268400;
        case 0x26840cu: goto label_26840c;
        case 0x268418u: goto label_268418;
        default: break;
    }

    ctx->pc = 0x268160u;

    // 0x268160: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x268160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x268164: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x268164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x268168: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x268168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x26816c: 0x2442bda0  addiu       $v0, $v0, -0x4260
    ctx->pc = 0x26816cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950304));
    // 0x268170: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x268170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x268174: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x268174u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x38BDA0u));
    // 0x268178: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x268178u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x26817c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x26817cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x268180: 0x2442bdb0  addiu       $v0, $v0, -0x4250
    ctx->pc = 0x268180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950320));
    // 0x268184: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x268184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x268188: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x268188u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x38BDB0u));
    // 0x26818c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x26818cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x268190: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x268190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x268194: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x268194u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x268198: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x268198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x26819c: 0xe420dce0  swc1        $f0, -0x2320($at)
    ctx->pc = 0x26819cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE0u, _value); } while (0); }
    // 0x2681a0: 0x3c024382  lui         $v0, 0x4382
    ctx->pc = 0x2681a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17282 << 16));
    // 0x2681a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2681a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2681a8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2681a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2681ac: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x2681acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x2681b0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2681b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2681b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2681b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2681b8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2681b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2681bc: 0xe420dce8  swc1        $f0, -0x2318($at)
    ctx->pc = 0x2681bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE8u, _value); } while (0); }
    // 0x2681c0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2681c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2681c4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2681C4u;
    SET_GPR_U32(ctx, 31, 0x2681CCu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2681C4u, 0x2681CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2681CCu;
label_2681cc:
    // 0x2681cc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2681ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2681d0: 0xe420dc94  swc1        $f0, -0x236C($at)
    ctx->pc = 0x2681d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDC94u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDC94u, _value); } while (0); }
    // 0x2681d4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2681d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2681d8: 0x8c23dbc8  lw          $v1, -0x2438($at)
    ctx->pc = 0x2681d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDBC8u));
    // 0x2681dc: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x2681dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x2681e0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2681e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2681e4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2681e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2681e8: 0xac22dbc8  sw          $v0, -0x2438($at)
    ctx->pc = 0x2681e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EDBC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDBC8u, _value); } while (0);
    // 0x2681ec: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2681ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2681f0: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x2681f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x2681f4: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x2681f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x2681f8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2681f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2681fc: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x2681fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x268200: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x268200u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x268204: 0xc0a1120  jal         func_284480
    ctx->pc = 0x268204u;
    SET_GPR_U32(ctx, 31, 0x26820Cu);
    ctx->pc = 0x284480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284480u, 0x268204u, 0x26820Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26820Cu;
label_26820c:
    // 0x26820c: 0x240400b4  addiu       $a0, $zero, 0xB4
    ctx->pc = 0x26820cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x268210: 0xc084964  jal         func_212590
    ctx->pc = 0x268210u;
    SET_GPR_U32(ctx, 31, 0x268218u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x268210u, 0x268218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268218u;
label_268218:
    // 0x268218: 0x3c02c47c  lui         $v0, 0xC47C
    ctx->pc = 0x268218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50300 << 16));
    // 0x26821c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x26821cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x268220: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x268220u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x268224: 0x0  nop
    ctx->pc = 0x268224u;
    // NOP
    // 0x268228: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x268228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x26822c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x26822cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x268230: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x268230u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x268234: 0x0  nop
    ctx->pc = 0x268234u;
    // NOP
    // 0x268238: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x268238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x26823c: 0x3c02457a  lui         $v0, 0x457A
    ctx->pc = 0x26823cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17786 << 16));
    // 0x268240: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x268240u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x268244: 0x0  nop
    ctx->pc = 0x268244u;
    // NOP
    // 0x268248: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x268248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x26824c: 0x3c0244c0  lui         $v0, 0x44C0
    ctx->pc = 0x26824cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17600 << 16));
    // 0x268250: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x268250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x268254: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x268254u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x268258: 0x0  nop
    ctx->pc = 0x268258u;
    // NOP
    // 0x26825c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x26825cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x268260: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x268260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x268264: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x268264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x268268: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x268268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26826c: 0xc09a110  jal         func_268440
    ctx->pc = 0x26826Cu;
    SET_GPR_U32(ctx, 31, 0x268274u);
    ctx->pc = 0x268440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268440u, 0x26826Cu, 0x268274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268274u;
label_268274:
    // 0x268274: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x268274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x268278: 0xc084964  jal         func_212590
    ctx->pc = 0x268278u;
    SET_GPR_U32(ctx, 31, 0x268280u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x268278u, 0x268280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268280u;
label_268280:
    // 0x268280: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x268280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x268284: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x268284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x268288: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x268288u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26828c: 0x0  nop
    ctx->pc = 0x26828cu;
    // NOP
    // 0x268290: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x268290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x268294: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x268294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x268298: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x268298u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26829c: 0x0  nop
    ctx->pc = 0x26829cu;
    // NOP
    // 0x2682a0: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2682a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2682a4: 0x3c02457a  lui         $v0, 0x457A
    ctx->pc = 0x2682a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17786 << 16));
    // 0x2682a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2682a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2682ac: 0x0  nop
    ctx->pc = 0x2682acu;
    // NOP
    // 0x2682b0: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2682b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2682b4: 0x3c0245d6  lui         $v0, 0x45D6
    ctx->pc = 0x2682b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17878 << 16));
    // 0x2682b8: 0x3442f800  ori         $v0, $v0, 0xF800
    ctx->pc = 0x2682b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63488);
    // 0x2682bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2682bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2682c0: 0x0  nop
    ctx->pc = 0x2682c0u;
    // NOP
    // 0x2682c4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2682c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2682c8: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2682c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2682cc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2682ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2682d0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2682d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2682d4: 0xc09a110  jal         func_268440
    ctx->pc = 0x2682D4u;
    SET_GPR_U32(ctx, 31, 0x2682DCu);
    ctx->pc = 0x268440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268440u, 0x2682D4u, 0x2682DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2682DCu;
label_2682dc:
    // 0x2682dc: 0x24040096  addiu       $a0, $zero, 0x96
    ctx->pc = 0x2682dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x2682e0: 0xc084964  jal         func_212590
    ctx->pc = 0x2682E0u;
    SET_GPR_U32(ctx, 31, 0x2682E8u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x2682E0u, 0x2682E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2682E8u;
label_2682e8:
    // 0x2682e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2682e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2682ec: 0xc0a1120  jal         func_284480
    ctx->pc = 0x2682ECu;
    SET_GPR_U32(ctx, 31, 0x2682F4u);
    ctx->pc = 0x284480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284480u, 0x2682ECu, 0x2682F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2682F4u;
label_2682f4:
    // 0x2682f4: 0x3c02c264  lui         $v0, 0xC264
    ctx->pc = 0x2682f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49764 << 16));
    // 0x2682f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2682f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2682fc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2682fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x268300: 0xe420dce0  swc1        $f0, -0x2320($at)
    ctx->pc = 0x268300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE0u, _value); } while (0); }
    // 0x268304: 0x3c02420c  lui         $v0, 0x420C
    ctx->pc = 0x268304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16908 << 16));
    // 0x268308: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x268308u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26830c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x26830cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x268310: 0xe420dce8  swc1        $f0, -0x2318($at)
    ctx->pc = 0x268310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE8u, _value); } while (0); }
    // 0x268314: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x268314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x268318: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x268318u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x26831c: 0x2402f7ff  addiu       $v0, $zero, -0x801
    ctx->pc = 0x26831cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x268320: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x268320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x268324: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x268324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x268328: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x268328u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x26832c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26832cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x268330: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x268330u;
    SET_GPR_U32(ctx, 31, 0x268338u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x268330u, 0x268338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268338u;
label_268338:
    // 0x268338: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x268338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x26833c: 0xe420dc94  swc1        $f0, -0x236C($at)
    ctx->pc = 0x26833cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDC94u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDC94u, _value); } while (0); }
    // 0x268340: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x268340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x268344: 0xc084964  jal         func_212590
    ctx->pc = 0x268344u;
    SET_GPR_U32(ctx, 31, 0x26834Cu);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x268344u, 0x26834Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26834Cu;
label_26834c:
    // 0x26834c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26834cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x268350: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x268350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x268354: 0xa022dbc0  sb          $v0, -0x2440($at)
    ctx->pc = 0x268354u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EDBC0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EDBC0u, _value); } while (0);
    // 0x268358: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x268358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x26835c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x26835cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x268360: 0xa022dbc1  sb          $v0, -0x243F($at)
    ctx->pc = 0x268360u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EDBC1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EDBC1u, _value); } while (0);
    // 0x268364: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x268364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x268368: 0xa020dbc2  sb          $zero, -0x243E($at)
    ctx->pc = 0x268368u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EDBC2u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EDBC2u, _value); } while (0);
    // 0x26836c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x26836cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x268370: 0xa020dbc3  sb          $zero, -0x243D($at)
    ctx->pc = 0x268370u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EDBC3u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EDBC3u, _value); } while (0);
    // 0x268374: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x268374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x268378: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x268378u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x26837c: 0xac22dbc4  sw          $v0, -0x243C($at)
    ctx->pc = 0x26837cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EDBC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDBC4u, _value); } while (0);
    // 0x268380: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x268380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x268384: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x268384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x268388: 0xa422fd64  sh          $v0, -0x29C($at)
    ctx->pc = 0x268388u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CFD64u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CFD64u, _value); } while (0);
    // 0x26838c: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x26838cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x268390: 0xc084964  jal         func_212590
    ctx->pc = 0x268390u;
    SET_GPR_U32(ctx, 31, 0x268398u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x268390u, 0x268398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268398u;
label_268398:
    // 0x268398: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x268398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x26839c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26839cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2683a0: 0xa422fd64  sh          $v0, -0x29C($at)
    ctx->pc = 0x2683a0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CFD64u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CFD64u, _value); } while (0);
    // 0x2683a4: 0x3c02c484  lui         $v0, 0xC484
    ctx->pc = 0x2683a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50308 << 16));
    // 0x2683a8: 0x34426000  ori         $v0, $v0, 0x6000
    ctx->pc = 0x2683a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24576);
    // 0x2683ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2683acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2683b0: 0x0  nop
    ctx->pc = 0x2683b0u;
    // NOP
    // 0x2683b4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2683b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2683b8: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2683b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2683bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2683bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2683c0: 0x0  nop
    ctx->pc = 0x2683c0u;
    // NOP
    // 0x2683c4: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2683c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2683c8: 0x3c02457a  lui         $v0, 0x457A
    ctx->pc = 0x2683c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17786 << 16));
    // 0x2683cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2683ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2683d0: 0x0  nop
    ctx->pc = 0x2683d0u;
    // NOP
    // 0x2683d4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2683d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2683d8: 0x3c024492  lui         $v0, 0x4492
    ctx->pc = 0x2683d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17554 << 16));
    // 0x2683dc: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x2683dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x2683e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2683e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2683e4: 0x0  nop
    ctx->pc = 0x2683e4u;
    // NOP
    // 0x2683e8: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2683e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2683ec: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2683ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2683f0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2683f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2683f4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2683f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2683f8: 0xc09a110  jal         func_268440
    ctx->pc = 0x2683F8u;
    SET_GPR_U32(ctx, 31, 0x268400u);
    ctx->pc = 0x268440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268440u, 0x2683F8u, 0x268400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268400u;
label_268400:
    // 0x268400: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x268400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x268404: 0xc084964  jal         func_212590
    ctx->pc = 0x268404u;
    SET_GPR_U32(ctx, 31, 0x26840Cu);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x268404u, 0x26840Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26840Cu;
label_26840c:
    // 0x26840c: 0x240404b0  addiu       $a0, $zero, 0x4B0
    ctx->pc = 0x26840cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1200));
    // 0x268410: 0xc084964  jal         func_212590
    ctx->pc = 0x268410u;
    SET_GPR_U32(ctx, 31, 0x268418u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x268410u, 0x268418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268418u;
label_268418:
    // 0x268418: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x268418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x26841c: 0x8c23dbc8  lw          $v1, -0x2438($at)
    ctx->pc = 0x26841cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDBC8u));
    // 0x268420: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x268420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x268424: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x268424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x268428: 0xac23dbc8  sw          $v1, -0x2438($at)
    ctx->pc = 0x268428u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3EDBC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDBC8u, _value); } while (0);
    // 0x26842c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x26842cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x268430: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x268430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x268434: 0x3e00008  jr          $ra
    ctx->pc = 0x268434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26843Cu;
}
