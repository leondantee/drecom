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

// Function: caseD_0
// Address: 0x26f880 - 0x26fb04
void caseD_0_0x26f880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x26f880");
#endif

    switch (ctx->pc) {
        case 0x26f914u: goto label_26f914;
        case 0x26f928u: goto label_26f928;
        case 0x26f950u: goto label_26f950;
        case 0x26f988u: goto label_26f988;
        case 0x26f9bcu: goto label_26f9bc;
        case 0x26f9ccu: goto label_26f9cc;
        case 0x26fa00u: goto label_26fa00;
        case 0x26fa10u: goto label_26fa10;
        case 0x26fa48u: goto label_26fa48;
        case 0x26fa58u: goto label_26fa58;
        case 0x26fa8cu: goto label_26fa8c;
        case 0x26fa9cu: goto label_26fa9c;
        case 0x26faf0u: goto label_26faf0;
        default: break;
    }

    ctx->pc = 0x26f880u;

    // 0x26f880: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26f880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x26f884: 0x8c261a98  lw          $a2, 0x1A98($at)
    ctx->pc = 0x26f884u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x26f888: 0x34c82000  ori         $t0, $a2, 0x2000
    ctx->pc = 0x26f888u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8192);
    // 0x26f88c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26f88cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x26f890: 0xac281a98  sw          $t0, 0x1A98($at)
    ctx->pc = 0x26f890u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x26f894: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x26f894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x26f898: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f89c: 0xa06210a8  sb          $v0, 0x10A8($v1)
    ctx->pc = 0x26f89cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 2));
    // 0x26f8a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26f8a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26f8a4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26f8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f8a8: 0xe4801b50  swc1        $f0, 0x1B50($a0)
    ctx->pc = 0x26f8a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6992), bits); }
    // 0x26f8ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26f8acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26f8b0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f8b4: 0xe4601b54  swc1        $f0, 0x1B54($v1)
    ctx->pc = 0x26f8b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6996), bits); }
    // 0x26f8b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26f8b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26f8bc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26f8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f8c0: 0xe4401b58  swc1        $f0, 0x1B58($v0)
    ctx->pc = 0x26f8c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 7000), bits); }
    // 0x26f8c4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26f8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f8c8: 0xac401b64  sw          $zero, 0x1B64($v0)
    ctx->pc = 0x26f8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7012), GPR_U32(ctx, 0));
    // 0x26f8cc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26f8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f8d0: 0x844713ae  lh          $a3, 0x13AE($v0)
    ctx->pc = 0x26f8d0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 5038)));
    // 0x26f8d4: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x26f8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f8d8: 0xa4a713ac  sh          $a3, 0x13AC($a1)
    ctx->pc = 0x26f8d8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 5036), (uint16_t)GPR_U32(ctx, 7));
    // 0x26f8dc: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x26f8dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f8e0: 0xa4c0127c  sh          $zero, 0x127C($a2)
    ctx->pc = 0x26f8e0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x26f8e4: 0x8fa80028  lw          $t0, 0x28($sp)
    ctx->pc = 0x26f8e4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f8e8: 0xc50000d4  lwc1        $f0, 0xD4($t0)
    ctx->pc = 0x26f8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26f8ec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26f8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f8f0: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x26f8f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x26f8f4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26f8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f8f8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26f8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f8fc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x26f8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x26f900: 0x24060a82  addiu       $a2, $zero, 0xA82
    ctx->pc = 0x26f900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2690));
    // 0x26f904: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26f904u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26f908: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x26f908u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x26f90c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x26F90Cu;
    SET_GPR_U32(ctx, 31, 0x26F914u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x26F90Cu, 0x26F914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F914u;
label_26f914:
    // 0x26f914: 0x3c02458d  lui         $v0, 0x458D
    ctx->pc = 0x26f914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17805 << 16));
    // 0x26f918: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x26f918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x26f91c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x26f91cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26f920: 0xc045630  jal         func_1158C0
    ctx->pc = 0x26F920u;
    SET_GPR_U32(ctx, 31, 0x26F928u);
    ctx->pc = 0x1158C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1158C0u, 0x26F920u, 0x26F928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F928u;
label_26f928:
    // 0x26f928: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x26f928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x26f92c: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x26f92cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x26f930: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x26f930u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26f934: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x26f934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26f938: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x26f938u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x26f93c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26f93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f940: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x26f940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x26f944: 0xc7ac001c  lwc1        $f12, 0x1C($sp)
    ctx->pc = 0x26f944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26f948: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x26F948u;
    SET_GPR_U32(ctx, 31, 0x26F950u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x26F948u, 0x26F950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F950u;
label_26f950:
    // 0x26f950: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f954: 0xac621b60  sw          $v0, 0x1B60($v1)
    ctx->pc = 0x26f954u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 2));
    // 0x26f958: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f95c: 0x8c621b60  lw          $v0, 0x1B60($v1)
    ctx->pc = 0x26f95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7008)));
    // 0x26f960: 0x2442001e  addiu       $v0, $v0, 0x1E
    ctx->pc = 0x26f960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
    // 0x26f964: 0xac621b60  sw          $v0, 0x1B60($v1)
    ctx->pc = 0x26f964u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 2));
    // 0x26f968: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x26f968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x26f96c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26f96cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26f970: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26f970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f974: 0xe4801280  swc1        $f0, 0x1280($a0)
    ctx->pc = 0x26f974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4736), bits); }
    // 0x26f978: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26f978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f97c: 0x24441b40  addiu       $a0, $v0, 0x1B40
    ctx->pc = 0x26f97cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6976));
    // 0x26f980: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x26F980u;
    SET_GPR_U32(ctx, 31, 0x26F988u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x26F980u, 0x26F988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F988u;
label_26f988:
    // 0x26f988: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x26f988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x26f98c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x26f98cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x26f990: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26f990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f994: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f998: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x26f998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x26f99c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x26f99cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26f9a0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26f9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f9a4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x26f9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x26f9a8: 0x24661b40  addiu       $a2, $v1, 0x1B40
    ctx->pc = 0x26f9a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 6976));
    // 0x26f9ac: 0x8c471b60  lw          $a3, 0x1B60($v0)
    ctx->pc = 0x26f9acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7008)));
    // 0x26f9b0: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x26f9b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x26f9b4: 0xc0bbfe4  jal         func_2EFF90
    ctx->pc = 0x26F9B4u;
    SET_GPR_U32(ctx, 31, 0x26F9BCu);
    ctx->pc = 0x2EFF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFF90u, 0x26F9B4u, 0x26F9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F9BCu;
label_26f9bc:
    // 0x26f9bc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f9c0: 0x24641b40  addiu       $a0, $v1, 0x1B40
    ctx->pc = 0x26f9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 6976));
    // 0x26f9c4: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x26F9C4u;
    SET_GPR_U32(ctx, 31, 0x26F9CCu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x26F9C4u, 0x26F9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F9CCu;
label_26f9cc:
    // 0x26f9cc: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x26f9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x26f9d0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x26f9d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26f9d4: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x26f9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x26f9d8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x26f9d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x26f9dc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26f9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f9e0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f9e4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26f9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f9e8: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x26f9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x26f9ec: 0x24661b40  addiu       $a2, $v1, 0x1B40
    ctx->pc = 0x26f9ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 6976));
    // 0x26f9f0: 0x8c471b60  lw          $a3, 0x1B60($v0)
    ctx->pc = 0x26f9f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7008)));
    // 0x26f9f4: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x26f9f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x26f9f8: 0xc0bbfe4  jal         func_2EFF90
    ctx->pc = 0x26F9F8u;
    SET_GPR_U32(ctx, 31, 0x26FA00u);
    ctx->pc = 0x2EFF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFF90u, 0x26F9F8u, 0x26FA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FA00u;
label_26fa00:
    // 0x26fa00: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26fa00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26fa04: 0x24441b40  addiu       $a0, $v0, 0x1B40
    ctx->pc = 0x26fa04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6976));
    // 0x26fa08: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x26FA08u;
    SET_GPR_U32(ctx, 31, 0x26FA10u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x26FA08u, 0x26FA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FA10u;
label_26fa10:
    // 0x26fa10: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x26fa10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x26fa14: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x26fa14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x26fa18: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26fa18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26fa1c: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x26fa1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26fa20: 0x3c054316  lui         $a1, 0x4316
    ctx->pc = 0x26fa20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17174 << 16));
    // 0x26fa24: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x26fa24u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26fa28: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26fa28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26fa2c: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x26fa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x26fa30: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x26fa30u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26fa34: 0x24c61b40  addiu       $a2, $a2, 0x1B40
    ctx->pc = 0x26fa34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6976));
    // 0x26fa38: 0x8c671b60  lw          $a3, 0x1B60($v1)
    ctx->pc = 0x26fa38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7008)));
    // 0x26fa3c: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x26fa3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x26fa40: 0xc0bbfe4  jal         func_2EFF90
    ctx->pc = 0x26FA40u;
    SET_GPR_U32(ctx, 31, 0x26FA48u);
    ctx->pc = 0x2EFF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFF90u, 0x26FA40u, 0x26FA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FA48u;
label_26fa48:
    // 0x26fa48: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26fa48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26fa4c: 0x24641b40  addiu       $a0, $v1, 0x1B40
    ctx->pc = 0x26fa4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 6976));
    // 0x26fa50: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x26FA50u;
    SET_GPR_U32(ctx, 31, 0x26FA58u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x26FA50u, 0x26FA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FA58u;
label_26fa58:
    // 0x26fa58: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x26fa58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x26fa5c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x26fa5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x26fa60: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26fa60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26fa64: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26fa64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26fa68: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x26fa68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x26fa6c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x26fa6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26fa70: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26fa70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26fa74: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x26fa74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x26fa78: 0x24661b40  addiu       $a2, $v1, 0x1B40
    ctx->pc = 0x26fa78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 6976));
    // 0x26fa7c: 0x8c471b60  lw          $a3, 0x1B60($v0)
    ctx->pc = 0x26fa7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7008)));
    // 0x26fa80: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x26fa80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x26fa84: 0xc0bbfe4  jal         func_2EFF90
    ctx->pc = 0x26FA84u;
    SET_GPR_U32(ctx, 31, 0x26FA8Cu);
    ctx->pc = 0x2EFF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFF90u, 0x26FA84u, 0x26FA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FA8Cu;
label_26fa8c:
    // 0x26fa8c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26fa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26fa90: 0x24441b40  addiu       $a0, $v0, 0x1B40
    ctx->pc = 0x26fa90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6976));
    // 0x26fa94: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x26FA94u;
    SET_GPR_U32(ctx, 31, 0x26FA9Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x26FA94u, 0x26FA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FA9Cu;
label_26fa9c:
    // 0x26fa9c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x26fa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x26faa0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26faa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26faa4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26faa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26faa8: 0xe4401b40  swc1        $f0, 0x1B40($v0)
    ctx->pc = 0x26faa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6976), bits); }
    // 0x26faac: 0x3c0442c8  lui         $a0, 0x42C8
    ctx->pc = 0x26faacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17096 << 16));
    // 0x26fab0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x26fab0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26fab4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26fab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26fab8: 0xe4401b48  swc1        $f0, 0x1B48($v0)
    ctx->pc = 0x26fab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6984), bits); }
    // 0x26fabc: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x26fabcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x26fac0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x26fac0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26fac4: 0x3c044248  lui         $a0, 0x4248
    ctx->pc = 0x26fac4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16968 << 16));
    // 0x26fac8: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x26fac8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x26facc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26faccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26fad0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26fad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26fad4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26fad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26fad8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x26fad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26fadc: 0x24661b40  addiu       $a2, $v1, 0x1B40
    ctx->pc = 0x26fadcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 6976));
    // 0x26fae0: 0x8c471b60  lw          $a3, 0x1B60($v0)
    ctx->pc = 0x26fae0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7008)));
    // 0x26fae4: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x26fae4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x26fae8: 0xc0bbfe4  jal         func_2EFF90
    ctx->pc = 0x26FAE8u;
    SET_GPR_U32(ctx, 31, 0x26FAF0u);
    ctx->pc = 0x2EFF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFF90u, 0x26FAE8u, 0x26FAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FAF0u;
label_26faf0:
    // 0x26faf0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x26faf0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26faf4: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x26faf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26faf8: 0x90a40002  lbu         $a0, 0x2($a1)
    ctx->pc = 0x26faf8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x26fafc: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x26fafcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x26fb00: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x26fb00u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x26fb04u;
}
