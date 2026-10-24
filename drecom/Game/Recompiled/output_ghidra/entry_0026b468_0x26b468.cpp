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

// Function: entry_0026b468
// Address: 0x26b468 - 0x26b66c
void entry_0026b468_0x26b468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026b468_0x26b468");
#endif

    switch (ctx->pc) {
        case 0x26b498u: goto label_26b498;
        case 0x26b4c0u: goto label_26b4c0;
        case 0x26b4f8u: goto label_26b4f8;
        case 0x26b52cu: goto label_26b52c;
        case 0x26b53cu: goto label_26b53c;
        case 0x26b570u: goto label_26b570;
        case 0x26b580u: goto label_26b580;
        case 0x26b5b4u: goto label_26b5b4;
        case 0x26b5c4u: goto label_26b5c4;
        case 0x26b5f8u: goto label_26b5f8;
        case 0x26b608u: goto label_26b608;
        case 0x26b65cu: goto label_26b65c;
        default: break;
    }

    ctx->pc = 0x26b468u;

    // 0x26b468: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x26b468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x26b46c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26b46cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26b470: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x26b470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26b474: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x26b474u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x26b478: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x26b478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x26b47c: 0x3c053f4c  lui         $a1, 0x3F4C
    ctx->pc = 0x26b47cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16204 << 16));
    // 0x26b480: 0x34a7cccd  ori         $a3, $a1, 0xCCCD
    ctx->pc = 0x26b480u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52429);
    // 0x26b484: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x26b484u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26b488: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x26b488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26b48c: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x26b48cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x26b490: 0xc045630  jal         func_1158C0
    ctx->pc = 0x26B490u;
    SET_GPR_U32(ctx, 31, 0x26B498u);
    ctx->pc = 0x1158C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1158C0u, 0x26B490u, 0x26B498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B498u;
label_26b498:
    // 0x26b498: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x26b498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x26b49c: 0x3c064020  lui         $a2, 0x4020
    ctx->pc = 0x26b49cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16416 << 16));
    // 0x26b4a0: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x26b4a0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26b4a4: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x26b4a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26b4a8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x26b4a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x26b4ac: 0x8fa80038  lw          $t0, 0x38($sp)
    ctx->pc = 0x26b4acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b4b0: 0xe5001284  swc1        $f0, 0x1284($t0)
    ctx->pc = 0x26b4b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4740), bits); }
    // 0x26b4b4: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x26b4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26b4b8: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x26B4B8u;
    SET_GPR_U32(ctx, 31, 0x26B4C0u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x26B4B8u, 0x26B4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B4C0u;
label_26b4c0:
    // 0x26b4c0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26b4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b4c4: 0xac621b60  sw          $v0, 0x1B60($v1)
    ctx->pc = 0x26b4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 2));
    // 0x26b4c8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x26b4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b4cc: 0x8c831b60  lw          $v1, 0x1B60($a0)
    ctx->pc = 0x26b4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7008)));
    // 0x26b4d0: 0x2462001e  addiu       $v0, $v1, 0x1E
    ctx->pc = 0x26b4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
    // 0x26b4d4: 0xac821b60  sw          $v0, 0x1B60($a0)
    ctx->pc = 0x26b4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7008), GPR_U32(ctx, 2));
    // 0x26b4d8: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x26b4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
    // 0x26b4dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26b4dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26b4e0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26b4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b4e4: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x26b4e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x26b4e8: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x26b4e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b4ec: 0x24e41b40  addiu       $a0, $a3, 0x1B40
    ctx->pc = 0x26b4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 6976));
    // 0x26b4f0: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x26B4F0u;
    SET_GPR_U32(ctx, 31, 0x26B4F8u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x26B4F0u, 0x26B4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B4F8u;
label_26b4f8:
    // 0x26b4f8: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x26b4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x26b4fc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x26b4fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26b500: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x26b500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b504: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x26b504u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b508: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x26b508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x26b50c: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x26b50cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x26b510: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26b510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b514: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x26b514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x26b518: 0x24c61b40  addiu       $a2, $a2, 0x1B40
    ctx->pc = 0x26b518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6976));
    // 0x26b51c: 0x8c471b60  lw          $a3, 0x1B60($v0)
    ctx->pc = 0x26b51cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7008)));
    // 0x26b520: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x26b520u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x26b524: 0xc0bbfe4  jal         func_2EFF90
    ctx->pc = 0x26B524u;
    SET_GPR_U32(ctx, 31, 0x26B52Cu);
    ctx->pc = 0x2EFF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFF90u, 0x26B524u, 0x26B52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B52Cu;
label_26b52c:
    // 0x26b52c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26b52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b530: 0x24441b40  addiu       $a0, $v0, 0x1B40
    ctx->pc = 0x26b530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6976));
    // 0x26b534: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x26B534u;
    SET_GPR_U32(ctx, 31, 0x26B53Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x26B534u, 0x26B53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B53Cu;
label_26b53c:
    // 0x26b53c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x26b53cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x26b540: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x26b540u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x26b544: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x26b544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b548: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x26b548u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b54c: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x26b54cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x26b550: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x26b550u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26b554: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26b554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b558: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x26b558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x26b55c: 0x24c61b40  addiu       $a2, $a2, 0x1B40
    ctx->pc = 0x26b55cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6976));
    // 0x26b560: 0x8c471b60  lw          $a3, 0x1B60($v0)
    ctx->pc = 0x26b560u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7008)));
    // 0x26b564: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x26b564u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x26b568: 0xc0bbfe4  jal         func_2EFF90
    ctx->pc = 0x26B568u;
    SET_GPR_U32(ctx, 31, 0x26B570u);
    ctx->pc = 0x2EFF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFF90u, 0x26B568u, 0x26B570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B570u;
label_26b570:
    // 0x26b570: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26b570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b574: 0x24441b40  addiu       $a0, $v0, 0x1B40
    ctx->pc = 0x26b574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6976));
    // 0x26b578: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x26B578u;
    SET_GPR_U32(ctx, 31, 0x26B580u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x26B578u, 0x26B580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B580u;
label_26b580:
    // 0x26b580: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x26b580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x26b584: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x26b584u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x26b588: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x26b588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b58c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26b58cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b590: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x26b590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x26b594: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x26b594u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26b598: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26b598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b59c: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x26b59cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x26b5a0: 0x24661b40  addiu       $a2, $v1, 0x1B40
    ctx->pc = 0x26b5a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 6976));
    // 0x26b5a4: 0x8c471b60  lw          $a3, 0x1B60($v0)
    ctx->pc = 0x26b5a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7008)));
    // 0x26b5a8: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x26b5a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x26b5ac: 0xc0bbfe4  jal         func_2EFF90
    ctx->pc = 0x26B5ACu;
    SET_GPR_U32(ctx, 31, 0x26B5B4u);
    ctx->pc = 0x2EFF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFF90u, 0x26B5ACu, 0x26B5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B5B4u;
label_26b5b4:
    // 0x26b5b4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26b5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b5b8: 0x24441b40  addiu       $a0, $v0, 0x1B40
    ctx->pc = 0x26b5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6976));
    // 0x26b5bc: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x26B5BCu;
    SET_GPR_U32(ctx, 31, 0x26B5C4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x26B5BCu, 0x26B5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B5C4u;
label_26b5c4:
    // 0x26b5c4: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x26b5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x26b5c8: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x26b5c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26b5cc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x26b5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b5d0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26b5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b5d4: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x26b5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x26b5d8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x26b5d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x26b5dc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26b5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b5e0: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x26b5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x26b5e4: 0x24661b40  addiu       $a2, $v1, 0x1B40
    ctx->pc = 0x26b5e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 6976));
    // 0x26b5e8: 0x8c471b60  lw          $a3, 0x1B60($v0)
    ctx->pc = 0x26b5e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7008)));
    // 0x26b5ec: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x26b5ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x26b5f0: 0xc0bbfe4  jal         func_2EFF90
    ctx->pc = 0x26B5F0u;
    SET_GPR_U32(ctx, 31, 0x26B5F8u);
    ctx->pc = 0x2EFF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFF90u, 0x26B5F0u, 0x26B5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B5F8u;
label_26b5f8:
    // 0x26b5f8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26b5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b5fc: 0x24441b40  addiu       $a0, $v0, 0x1B40
    ctx->pc = 0x26b5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6976));
    // 0x26b600: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x26B600u;
    SET_GPR_U32(ctx, 31, 0x26B608u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x26B600u, 0x26B608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B608u;
label_26b608:
    // 0x26b608: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x26b608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x26b60c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26b60cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26b610: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26b610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b614: 0xe4401b40  swc1        $f0, 0x1B40($v0)
    ctx->pc = 0x26b614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6976), bits); }
    // 0x26b618: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x26b618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x26b61c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26b61cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26b620: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26b620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b624: 0xe4401b48  swc1        $f0, 0x1B48($v0)
    ctx->pc = 0x26b624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6984), bits); }
    // 0x26b628: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x26b628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x26b62c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x26b62cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26b630: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x26b630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b634: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x26b634u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b638: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x26b638u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x26b63c: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x26b63cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x26b640: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26b640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b644: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x26b644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26b648: 0x24c61b40  addiu       $a2, $a2, 0x1B40
    ctx->pc = 0x26b648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6976));
    // 0x26b64c: 0x8c471b60  lw          $a3, 0x1B60($v0)
    ctx->pc = 0x26b64cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7008)));
    // 0x26b650: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x26b650u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x26b654: 0xc0bbfe4  jal         func_2EFF90
    ctx->pc = 0x26B654u;
    SET_GPR_U32(ctx, 31, 0x26B65Cu);
    ctx->pc = 0x2EFF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFF90u, 0x26B654u, 0x26B65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B65Cu;
label_26b65c:
    // 0x26b65c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x26b65cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b660: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x26b660u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x26b664: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x26b664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26b668: 0xa0820002  sb          $v0, 0x2($a0)
    ctx->pc = 0x26b668u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x26b66cu;
}
