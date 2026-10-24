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

// Function: camera_hokan
// Address: 0x17e440 - 0x17edf0
void camera_hokan_0x17e440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("camera_hokan_0x17e440");
#endif

    switch (ctx->pc) {
        case 0x17e4e8u: goto label_17e4e8;
        case 0x17e508u: goto label_17e508;
        case 0x17e520u: goto label_17e520;
        case 0x17e540u: goto label_17e540;
        case 0x17e5ccu: goto label_17e5cc;
        case 0x17e5ecu: goto label_17e5ec;
        case 0x17e604u: goto label_17e604;
        case 0x17e624u: goto label_17e624;
        case 0x17e778u: goto label_17e778;
        case 0x17e79cu: goto label_17e79c;
        case 0x17e808u: goto label_17e808;
        case 0x17e904u: goto label_17e904;
        case 0x17e95cu: goto label_17e95c;
        case 0x17e97cu: goto label_17e97c;
        case 0x17e99cu: goto label_17e99c;
        case 0x17e9c0u: goto label_17e9c0;
        case 0x17ea28u: goto label_17ea28;
        case 0x17eb24u: goto label_17eb24;
        case 0x17eb7cu: goto label_17eb7c;
        case 0x17eb9cu: goto label_17eb9c;
        case 0x17ebacu: goto label_17ebac;
        case 0x17ec28u: goto label_17ec28;
        case 0x17ec60u: goto label_17ec60;
        case 0x17ece0u: goto label_17ece0;
        case 0x17ed18u: goto label_17ed18;
        case 0x17ed94u: goto label_17ed94;
        case 0x17edd8u: goto label_17edd8;
        default: break;
    }

    ctx->pc = 0x17e440u;

    // 0x17e440: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x17e440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x17e444: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x17e444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x17e448: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17e448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17e44c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17e44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17e450: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x17e450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x17e454: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x17e454u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17e458: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x17e458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17e45c: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x17e45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x17e460: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x17E460u;
    {
        const bool branch_taken_0x17e460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e460) {
            ctx->pc = 0x17E544u;
            goto label_17e544;
        }
    }
    ctx->pc = 0x17E468u;
    // 0x17e468: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x17e468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17e46c: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x17e46cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x17e470: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x17e470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x17e474: 0xac830084  sw          $v1, 0x84($a0)
    ctx->pc = 0x17e474u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 3));
    // 0x17e478: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17e478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17e47c: 0x8c440084  lw          $a0, 0x84($v0)
    ctx->pc = 0x17e47cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x17e480: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17e480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17e484: 0x8c430088  lw          $v1, 0x88($v0)
    ctx->pc = 0x17e484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x17e488: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x17E488u;
    {
        const bool branch_taken_0x17e488 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x17e488) {
            ctx->pc = 0x17E4C4u;
            goto label_17e4c4;
        }
    }
    ctx->pc = 0x17E490u;
    // 0x17e490: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17e490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17e494: 0xac400084  sw          $zero, 0x84($v0)
    ctx->pc = 0x17e494u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 0));
    // 0x17e498: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17e498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17e49c: 0xac400088  sw          $zero, 0x88($v0)
    ctx->pc = 0x17e49cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 136), GPR_U32(ctx, 0));
    // 0x17e4a0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17e4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17e4a4: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x17e4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x17e4a8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x17e4a8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17e4ac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17e4acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17e4b0: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x17e4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x17e4b4: 0x24450190  addiu       $a1, $v0, 0x190
    ctx->pc = 0x17e4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x17e4b8: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x17e4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x17e4bc: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x17E4BCu;
    {
        const bool branch_taken_0x17e4bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e4bc) {
            ctx->pc = 0x17E540u;
            goto label_17e540;
        }
    }
    ctx->pc = 0x17E4C4u;
label_17e4c4:
    // 0x17e4c4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x17e4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17e4c8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17e4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17e4cc: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x17e4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17e4d0: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x17e4d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x17e4d4: 0x24660030  addiu       $a2, $v1, 0x30
    ctx->pc = 0x17e4d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x17e4d8: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x17e4d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x17e4dc: 0x24460020  addiu       $a2, $v0, 0x20
    ctx->pc = 0x17e4dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x17e4e0: 0xc040c80  jal         func_103200
    ctx->pc = 0x17E4E0u;
    SET_GPR_U32(ctx, 31, 0x17E4E8u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x17E4E8u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17E4E8u) { return; }
    ctx->pc = 0x17E4E8u;
label_17e4e8:
    // 0x17e4e8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x17e4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17e4ec: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17e4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17e4f0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x17e4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17e4f4: 0x8c84008c  lw          $a0, 0x8C($a0)
    ctx->pc = 0x17e4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x17e4f8: 0x8c450084  lw          $a1, 0x84($v0)
    ctx->pc = 0x17e4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x17e4fc: 0x8c660088  lw          $a2, 0x88($v1)
    ctx->pc = 0x17e4fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x17e500: 0xc05fb7c  jal         func_17EDF0
    ctx->pc = 0x17E500u;
    SET_GPR_U32(ctx, 31, 0x17E508u);
    ctx->pc = 0x17EDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EDF0u, 0x17E500u, 0x17E508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E508u;
label_17e508:
    // 0x17e508: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x17e508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x17e50c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x17e50cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17e510: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x17e510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17e514: 0xc7ac0054  lwc1        $f12, 0x54($sp)
    ctx->pc = 0x17e514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17e518: 0xc040c8c  jal         func_103230
    ctx->pc = 0x17E518u;
    SET_GPR_U32(ctx, 31, 0x17E520u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x17E520u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17E520u) { return; }
    ctx->pc = 0x17E520u;
label_17e520:
    // 0x17e520: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17e520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17e524: 0x8c240af0  lw          $a0, 0xAF0($at)
    ctx->pc = 0x17e524u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x17e528: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x17e528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17e52c: 0x24840190  addiu       $a0, $a0, 0x190
    ctx->pc = 0x17e52cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 400));
    // 0x17e530: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x17e530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17e534: 0x24660020  addiu       $a2, $v1, 0x20
    ctx->pc = 0x17e534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x17e538: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x17E538u;
    SET_GPR_U32(ctx, 31, 0x17E540u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x17E540u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17E540u) { return; }
    ctx->pc = 0x17E540u;
label_17e540:
    // 0x17e540: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x17e540u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17e544:
    // 0x17e544: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x17e544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17e548: 0x8c640094  lw          $a0, 0x94($v1)
    ctx->pc = 0x17e548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x17e54c: 0x10800036  beqz        $a0, . + 4 + (0x36 << 2)
    ctx->pc = 0x17E54Cu;
    {
        const bool branch_taken_0x17e54c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e54c) {
            ctx->pc = 0x17E628u;
            goto label_17e628;
        }
    }
    ctx->pc = 0x17E554u;
    // 0x17e554: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x17e554u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17e558: 0x8ca60090  lw          $a2, 0x90($a1)
    ctx->pc = 0x17e558u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 144)));
    // 0x17e55c: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x17e55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x17e560: 0xaca20090  sw          $v0, 0x90($a1)
    ctx->pc = 0x17e560u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 144), GPR_U32(ctx, 2));
    // 0x17e564: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17e564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17e568: 0x8c430090  lw          $v1, 0x90($v0)
    ctx->pc = 0x17e568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x17e56c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x17e56cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17e570: 0x8c820094  lw          $v0, 0x94($a0)
    ctx->pc = 0x17e570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x17e574: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x17E574u;
    {
        const bool branch_taken_0x17e574 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x17e574) {
            ctx->pc = 0x17E5B0u;
            goto label_17e5b0;
        }
    }
    ctx->pc = 0x17E57Cu;
    // 0x17e57c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17e57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17e580: 0xac400090  sw          $zero, 0x90($v0)
    ctx->pc = 0x17e580u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 144), GPR_U32(ctx, 0));
    // 0x17e584: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17e584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17e588: 0xac400094  sw          $zero, 0x94($v0)
    ctx->pc = 0x17e588u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 148), GPR_U32(ctx, 0));
    // 0x17e58c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17e58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17e590: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x17e590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x17e594: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x17e594u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17e598: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17e598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17e59c: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x17e59cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x17e5a0: 0x244201a0  addiu       $v0, $v0, 0x1A0
    ctx->pc = 0x17e5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
    // 0x17e5a4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x17e5a4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x17e5a8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x17E5A8u;
    {
        const bool branch_taken_0x17e5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e5a8) {
            ctx->pc = 0x17E624u;
            goto label_17e624;
        }
    }
    ctx->pc = 0x17E5B0u;
label_17e5b0:
    // 0x17e5b0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x17e5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17e5b4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17e5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17e5b8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x17e5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17e5bc: 0x24650050  addiu       $a1, $v1, 0x50
    ctx->pc = 0x17e5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x17e5c0: 0x24460040  addiu       $a2, $v0, 0x40
    ctx->pc = 0x17e5c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x17e5c4: 0xc040c80  jal         func_103200
    ctx->pc = 0x17E5C4u;
    SET_GPR_U32(ctx, 31, 0x17E5CCu);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x17E5CCu;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17E5CCu) { return; }
    ctx->pc = 0x17E5CCu;
label_17e5cc:
    // 0x17e5cc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x17e5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17e5d0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x17e5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17e5d4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17e5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17e5d8: 0x8c840098  lw          $a0, 0x98($a0)
    ctx->pc = 0x17e5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 152)));
    // 0x17e5dc: 0x8c650090  lw          $a1, 0x90($v1)
    ctx->pc = 0x17e5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x17e5e0: 0x8c460094  lw          $a2, 0x94($v0)
    ctx->pc = 0x17e5e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x17e5e4: 0xc05fb7c  jal         func_17EDF0
    ctx->pc = 0x17E5E4u;
    SET_GPR_U32(ctx, 31, 0x17E5ECu);
    ctx->pc = 0x17EDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EDF0u, 0x17E5E4u, 0x17E5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E5ECu;
label_17e5ec:
    // 0x17e5ec: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x17e5ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x17e5f0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x17e5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17e5f4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x17e5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17e5f8: 0xc7ac0054  lwc1        $f12, 0x54($sp)
    ctx->pc = 0x17e5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17e5fc: 0xc040c8c  jal         func_103230
    ctx->pc = 0x17E5FCu;
    SET_GPR_U32(ctx, 31, 0x17E604u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x17E604u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17E604u) { return; }
    ctx->pc = 0x17E604u;
label_17e604:
    // 0x17e604: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17e604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17e608: 0x8c230af0  lw          $v1, 0xAF0($at)
    ctx->pc = 0x17e608u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x17e60c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17e60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17e610: 0x246401a0  addiu       $a0, $v1, 0x1A0
    ctx->pc = 0x17e610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 416));
    // 0x17e614: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x17e614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17e618: 0x24460040  addiu       $a2, $v0, 0x40
    ctx->pc = 0x17e618u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x17e61c: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x17E61Cu;
    SET_GPR_U32(ctx, 31, 0x17E624u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x17E624u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17E624u) { return; }
    ctx->pc = 0x17E624u;
label_17e624:
    // 0x17e624: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x17e624u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17e628:
    // 0x17e628: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17e628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17e62c: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x17e62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x17e630: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x17E630u;
    {
        const bool branch_taken_0x17e630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e630) {
            ctx->pc = 0x17E758u;
            goto label_17e758;
        }
    }
    ctx->pc = 0x17E638u;
    // 0x17e638: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x17e638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17e63c: 0x8c6200c0  lw          $v0, 0xC0($v1)
    ctx->pc = 0x17e63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x17e640: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17e640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17e644: 0xac6200c0  sw          $v0, 0xC0($v1)
    ctx->pc = 0x17e644u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 192), GPR_U32(ctx, 2));
    // 0x17e648: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17e648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17e64c: 0x8c4300c0  lw          $v1, 0xC0($v0)
    ctx->pc = 0x17e64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x17e650: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17e650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17e654: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x17e654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x17e658: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x17E658u;
    {
        const bool branch_taken_0x17e658 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x17e658) {
            ctx->pc = 0x17E68Cu;
            goto label_17e68c;
        }
    }
    ctx->pc = 0x17E660u;
    // 0x17e660: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17e660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17e664: 0xac4000c0  sw          $zero, 0xC0($v0)
    ctx->pc = 0x17e664u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 192), GPR_U32(ctx, 0));
    // 0x17e668: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17e668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17e66c: 0xac4000c4  sw          $zero, 0xC4($v0)
    ctx->pc = 0x17e66cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 196), GPR_U32(ctx, 0));
    // 0x17e670: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17e670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17e674: 0xc440007c  lwc1        $f0, 0x7C($v0)
    ctx->pc = 0x17e674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17e678: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17e678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17e67c: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x17e67cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x17e680: 0xe44001b0  swc1        $f0, 0x1B0($v0)
    ctx->pc = 0x17e680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 432), bits); }
    // 0x17e684: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x17E684u;
    {
        const bool branch_taken_0x17e684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e684) {
            ctx->pc = 0x17E754u;
            goto label_17e754;
        }
    }
    ctx->pc = 0x17E68Cu;
label_17e68c:
    // 0x17e68c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17e68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17e690: 0x8c4200c8  lw          $v0, 0xC8($v0)
    ctx->pc = 0x17e690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 200)));
    // 0x17e694: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x17E694u;
    {
        const bool branch_taken_0x17e694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e694) {
            ctx->pc = 0x17E6FCu;
            goto label_17e6fc;
        }
    }
    ctx->pc = 0x17E69Cu;
    // 0x17e69c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17e69cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17e6a0: 0x8c230af0  lw          $v1, 0xAF0($at)
    ctx->pc = 0x17e6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x17e6a4: 0xc46101b0  lwc1        $f1, 0x1B0($v1)
    ctx->pc = 0x17e6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17e6a8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17e6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17e6ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17e6acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17e6b0: 0x0  nop
    ctx->pc = 0x17e6b0u;
    // NOP
    // 0x17e6b4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17e6b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17e6b8: 0xe46001b0  swc1        $f0, 0x1B0($v1)
    ctx->pc = 0x17e6b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 432), bits); }
    // 0x17e6bc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17e6bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17e6c0: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x17e6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x17e6c4: 0xc44101b0  lwc1        $f1, 0x1B0($v0)
    ctx->pc = 0x17e6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17e6c8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17e6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17e6cc: 0xc440007c  lwc1        $f0, 0x7C($v0)
    ctx->pc = 0x17e6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17e6d0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17e6d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17e6d4: 0x0  nop
    ctx->pc = 0x17e6d4u;
    // NOP
    // 0x17e6d8: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
    ctx->pc = 0x17E6D8u;
    {
        const bool branch_taken_0x17e6d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17e6d8) {
            ctx->pc = 0x17E754u;
            goto label_17e754;
        }
    }
    ctx->pc = 0x17E6E0u;
    // 0x17e6e0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17e6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17e6e4: 0xc440007c  lwc1        $f0, 0x7C($v0)
    ctx->pc = 0x17e6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17e6e8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17e6e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17e6ec: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x17e6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x17e6f0: 0xe44001b0  swc1        $f0, 0x1B0($v0)
    ctx->pc = 0x17e6f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 432), bits); }
    // 0x17e6f4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x17E6F4u;
    {
        const bool branch_taken_0x17e6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e6f4) {
            ctx->pc = 0x17E754u;
            goto label_17e754;
        }
    }
    ctx->pc = 0x17E6FCu;
label_17e6fc:
    // 0x17e6fc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17e6fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17e700: 0x8c230af0  lw          $v1, 0xAF0($at)
    ctx->pc = 0x17e700u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x17e704: 0xc46101b0  lwc1        $f1, 0x1B0($v1)
    ctx->pc = 0x17e704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17e708: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17e708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17e70c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17e70cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17e710: 0x0  nop
    ctx->pc = 0x17e710u;
    // NOP
    // 0x17e714: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x17e714u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x17e718: 0xe46001b0  swc1        $f0, 0x1B0($v1)
    ctx->pc = 0x17e718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 432), bits); }
    // 0x17e71c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17e71cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17e720: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x17e720u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x17e724: 0xc44101b0  lwc1        $f1, 0x1B0($v0)
    ctx->pc = 0x17e724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17e728: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17e728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17e72c: 0xc440007c  lwc1        $f0, 0x7C($v0)
    ctx->pc = 0x17e72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17e730: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17e730u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17e734: 0x0  nop
    ctx->pc = 0x17e734u;
    // NOP
    // 0x17e738: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x17E738u;
    {
        const bool branch_taken_0x17e738 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17e738) {
            ctx->pc = 0x17E754u;
            goto label_17e754;
        }
    }
    ctx->pc = 0x17E740u;
    // 0x17e740: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17e740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17e744: 0xc440007c  lwc1        $f0, 0x7C($v0)
    ctx->pc = 0x17e744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17e748: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17e748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17e74c: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x17e74cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x17e750: 0xe44001b0  swc1        $f0, 0x1B0($v0)
    ctx->pc = 0x17e750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 432), bits); }
label_17e754:
    // 0x17e754: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x17e754u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17e758:
    // 0x17e758: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17e758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17e75c: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x17e75cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x17e760: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x17e760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17e764: 0x244501a0  addiu       $a1, $v0, 0x1A0
    ctx->pc = 0x17e764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
    // 0x17e768: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x17e768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x17e76c: 0x2446f100  addiu       $a2, $v0, -0xF00
    ctx->pc = 0x17e76cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963456));
    // 0x17e770: 0xc040c80  jal         func_103200
    ctx->pc = 0x17E770u;
    SET_GPR_U32(ctx, 31, 0x17E778u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x17E778u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17E778u) { return; }
    ctx->pc = 0x17E778u;
label_17e778:
    // 0x17e778: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17e778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17e77c: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x17e77cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x17e780: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x17e780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x17e784: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x17e784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x17e788: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x17E788u;
    {
        const bool branch_taken_0x17e788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e788) {
            ctx->pc = 0x17E7E4u;
            goto label_17e7e4;
        }
    }
    ctx->pc = 0x17E790u;
    // 0x17e790: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x17e790u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17e794: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x17E794u;
    {
        const bool branch_taken_0x17e794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e794) {
            ctx->pc = 0x17E7C0u;
            goto label_17e7c0;
        }
    }
    ctx->pc = 0x17E79Cu;
label_17e79c:
    // 0x17e79c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17e79cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17e7a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17e7a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17e7a4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x17e7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x17e7a8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x17e7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x17e7ac: 0x24420130  addiu       $v0, $v0, 0x130
    ctx->pc = 0x17e7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 304));
    // 0x17e7b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17e7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17e7b4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x17e7b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x17e7b8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17e7b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17e7bc: 0x0  nop
    ctx->pc = 0x17e7bcu;
    // NOP
label_17e7c0:
    // 0x17e7c0: 0x2e020040  sltiu       $v0, $s0, 0x40
    ctx->pc = 0x17e7c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x17e7c4: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x17E7C4u;
    {
        const bool branch_taken_0x17e7c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e7c4) {
            ctx->pc = 0x17E79Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17e79c;
        }
    }
    ctx->pc = 0x17E7CCu;
    // 0x17e7cc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17e7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17e7d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17e7d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17e7d4: 0x0  nop
    ctx->pc = 0x17e7d4u;
    // NOP
    // 0x17e7d8: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x17e7d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x17e7dc: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x17E7DCu;
    {
        const bool branch_taken_0x17e7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e7dc) {
            ctx->pc = 0x17E948u;
            goto label_17e948;
        }
    }
    ctx->pc = 0x17E7E4u;
label_17e7e4:
    // 0x17e7e4: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x17e7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17e7e8: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x17e7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17e7ec: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x17e7ecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17e7f0: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x17e7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17e7f4: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x17e7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17e7f8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17e7f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17e7fc: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x17e7fcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x17e800: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x17E800u;
    SET_GPR_U32(ctx, 31, 0x17E808u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x17E800u, 0x17E808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E808u;
label_17e808:
    // 0x17e808: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x17e808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x17e80c: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x17e80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17e810: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x17e810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x17e814: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x17e814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x17e818: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17e818u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17e81c: 0x0  nop
    ctx->pc = 0x17e81cu;
    // NOP
    // 0x17e820: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17e820u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17e824: 0x0  nop
    ctx->pc = 0x17e824u;
    // NOP
    // 0x17e828: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x17E828u;
    {
        const bool branch_taken_0x17e828 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17e828) {
            ctx->pc = 0x17E848u;
            goto label_17e848;
        }
    }
    ctx->pc = 0x17E830u;
    // 0x17e830: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17e830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17e834: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17e834u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17e838: 0x0  nop
    ctx->pc = 0x17e838u;
    // NOP
    // 0x17e83c: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x17e83cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x17e840: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x17E840u;
    {
        const bool branch_taken_0x17e840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e840) {
            ctx->pc = 0x17E89Cu;
            goto label_17e89c;
        }
    }
    ctx->pc = 0x17E848u;
label_17e848:
    // 0x17e848: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x17e848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17e84c: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x17e84cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x17e850: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17e850u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17e854: 0x0  nop
    ctx->pc = 0x17e854u;
    // NOP
    // 0x17e858: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17e858u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17e85c: 0x0  nop
    ctx->pc = 0x17e85cu;
    // NOP
    // 0x17e860: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x17E860u;
    {
        const bool branch_taken_0x17e860 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17e860) {
            ctx->pc = 0x17E884u;
            goto label_17e884;
        }
    }
    ctx->pc = 0x17E868u;
    // 0x17e868: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x17e868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x17e86c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x17e86cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x17e870: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17e870u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17e874: 0x0  nop
    ctx->pc = 0x17e874u;
    // NOP
    // 0x17e878: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x17e878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x17e87c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17E87Cu;
    {
        const bool branch_taken_0x17e87c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e87c) {
            ctx->pc = 0x17E89Cu;
            goto label_17e89c;
        }
    }
    ctx->pc = 0x17E884u;
label_17e884:
    // 0x17e884: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x17e884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x17e888: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x17e888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x17e88c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17e88cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17e890: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x17e890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17e894: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x17e894u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x17e898: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x17e898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_17e89c:
    // 0x17e89c: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x17e89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17e8a0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17e8a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17e8a4: 0x8c22f128  lw          $v0, -0xED8($at)
    ctx->pc = 0x17e8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47F128u));
    // 0x17e8a8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x17e8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17e8ac: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x17e8acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x17e8b0: 0x24420130  addiu       $v0, $v0, 0x130
    ctx->pc = 0x17e8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 304));
    // 0x17e8b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17e8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17e8b8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x17e8b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x17e8bc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17e8bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17e8c0: 0x8c22f128  lw          $v0, -0xED8($at)
    ctx->pc = 0x17e8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47F128u));
    // 0x17e8c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17e8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17e8c8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17e8c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17e8cc: 0xac22f128  sw          $v0, -0xED8($at)
    ctx->pc = 0x17e8ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x47F128u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F128u, _value); } while (0);
    // 0x17e8d0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17e8d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17e8d4: 0x8c23f128  lw          $v1, -0xED8($at)
    ctx->pc = 0x17e8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x47F128u));
    // 0x17e8d8: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x17e8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x17e8dc: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17E8DCu;
    {
        const bool branch_taken_0x17e8dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x17e8dc) {
            ctx->pc = 0x17E8ECu;
            goto label_17e8ec;
        }
    }
    ctx->pc = 0x17E8E4u;
    // 0x17e8e4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17e8e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17e8e8: 0xac20f128  sw          $zero, -0xED8($at)
    ctx->pc = 0x17e8e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x47F128u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F128u, _value); } while (0);
label_17e8ec:
    // 0x17e8ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17e8ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17e8f0: 0x0  nop
    ctx->pc = 0x17e8f0u;
    // NOP
    // 0x17e8f4: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x17e8f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x17e8f8: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x17e8f8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17e8fc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x17E8FCu;
    {
        const bool branch_taken_0x17e8fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e8fc) {
            ctx->pc = 0x17E928u;
            goto label_17e928;
        }
    }
    ctx->pc = 0x17E904u;
label_17e904:
    // 0x17e904: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x17e904u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x17e908: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x17e908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x17e90c: 0x24420130  addiu       $v0, $v0, 0x130
    ctx->pc = 0x17e90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 304));
    // 0x17e910: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17e910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17e914: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x17e914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17e918: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x17e918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17e91c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x17e91cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x17e920: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x17e920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x17e924: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17e924u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_17e928:
    // 0x17e928: 0x2e020040  sltiu       $v0, $s0, 0x40
    ctx->pc = 0x17e928u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x17e92c: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x17E92Cu;
    {
        const bool branch_taken_0x17e92c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e92c) {
            ctx->pc = 0x17E904u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17e904;
        }
    }
    ctx->pc = 0x17E934u;
    // 0x17e934: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x17e934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x17e938: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17e938u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17e93c: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x17e93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17e940: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x17e940u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x17e944: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x17e944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_17e948:
    // 0x17e948: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x17e948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17e94c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x17e94cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17e950: 0xc7ac005c  lwc1        $f12, 0x5C($sp)
    ctx->pc = 0x17e950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17e954: 0xc040c8c  jal         func_103230
    ctx->pc = 0x17E954u;
    SET_GPR_U32(ctx, 31, 0x17E95Cu);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x17E95Cu;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17E95Cu) { return; }
    ctx->pc = 0x17E95Cu;
label_17e95c:
    // 0x17e95c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17e95cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17e960: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x17e960u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x17e964: 0x244401a0  addiu       $a0, $v0, 0x1A0
    ctx->pc = 0x17e964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
    // 0x17e968: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x17e968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17e96c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x17e96cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x17e970: 0x2446f100  addiu       $a2, $v0, -0xF00
    ctx->pc = 0x17e970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963456));
    // 0x17e974: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x17E974u;
    SET_GPR_U32(ctx, 31, 0x17E97Cu);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x17E97Cu;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17E97Cu) { return; }
    ctx->pc = 0x17E97Cu;
label_17e97c:
    // 0x17e97c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17e97cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17e980: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x17e980u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x17e984: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x17e984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17e988: 0x24450190  addiu       $a1, $v0, 0x190
    ctx->pc = 0x17e988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x17e98c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x17e98cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x17e990: 0x2446f110  addiu       $a2, $v0, -0xEF0
    ctx->pc = 0x17e990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963472));
    // 0x17e994: 0xc040c80  jal         func_103200
    ctx->pc = 0x17E994u;
    SET_GPR_U32(ctx, 31, 0x17E99Cu);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x17E99Cu;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17E99Cu) { return; }
    ctx->pc = 0x17E99Cu;
label_17e99c:
    // 0x17e99c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17e99cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17e9a0: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x17e9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x17e9a4: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x17e9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x17e9a8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x17e9a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x17e9ac: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x17E9ACu;
    {
        const bool branch_taken_0x17e9ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e9ac) {
            ctx->pc = 0x17EA04u;
            goto label_17ea04;
        }
    }
    ctx->pc = 0x17E9B4u;
    // 0x17e9b4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x17e9b4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17e9b8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x17E9B8u;
    {
        const bool branch_taken_0x17e9b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e9b8) {
            ctx->pc = 0x17E9E0u;
            goto label_17e9e0;
        }
    }
    ctx->pc = 0x17E9C0u;
label_17e9c0:
    // 0x17e9c0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17e9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17e9c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17e9c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17e9c8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x17e9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x17e9cc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x17e9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x17e9d0: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x17e9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x17e9d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17e9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17e9d8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x17e9d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x17e9dc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17e9dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_17e9e0:
    // 0x17e9e0: 0x2e020040  sltiu       $v0, $s0, 0x40
    ctx->pc = 0x17e9e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x17e9e4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x17E9E4u;
    {
        const bool branch_taken_0x17e9e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e9e4) {
            ctx->pc = 0x17E9C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17e9c0;
        }
    }
    ctx->pc = 0x17E9ECu;
    // 0x17e9ec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17e9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17e9f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17e9f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17e9f4: 0x0  nop
    ctx->pc = 0x17e9f4u;
    // NOP
    // 0x17e9f8: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x17e9f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x17e9fc: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x17E9FCu;
    {
        const bool branch_taken_0x17e9fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e9fc) {
            ctx->pc = 0x17EB68u;
            goto label_17eb68;
        }
    }
    ctx->pc = 0x17EA04u;
label_17ea04:
    // 0x17ea04: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x17ea04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17ea08: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x17ea08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ea0c: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x17ea0cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17ea10: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x17ea10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17ea14: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x17ea14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ea18: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17ea18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17ea1c: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x17ea1cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x17ea20: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x17EA20u;
    SET_GPR_U32(ctx, 31, 0x17EA28u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x17EA20u, 0x17EA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EA28u;
label_17ea28:
    // 0x17ea28: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x17ea28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x17ea2c: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x17ea2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17ea30: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x17ea30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x17ea34: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x17ea34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x17ea38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17ea38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17ea3c: 0x0  nop
    ctx->pc = 0x17ea3cu;
    // NOP
    // 0x17ea40: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17ea40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17ea44: 0x0  nop
    ctx->pc = 0x17ea44u;
    // NOP
    // 0x17ea48: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x17EA48u;
    {
        const bool branch_taken_0x17ea48 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17ea48) {
            ctx->pc = 0x17EA68u;
            goto label_17ea68;
        }
    }
    ctx->pc = 0x17EA50u;
    // 0x17ea50: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17ea50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17ea54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17ea54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17ea58: 0x0  nop
    ctx->pc = 0x17ea58u;
    // NOP
    // 0x17ea5c: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x17ea5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x17ea60: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x17EA60u;
    {
        const bool branch_taken_0x17ea60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ea60) {
            ctx->pc = 0x17EABCu;
            goto label_17eabc;
        }
    }
    ctx->pc = 0x17EA68u;
label_17ea68:
    // 0x17ea68: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x17ea68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17ea6c: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x17ea6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x17ea70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17ea70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17ea74: 0x0  nop
    ctx->pc = 0x17ea74u;
    // NOP
    // 0x17ea78: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17ea78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17ea7c: 0x0  nop
    ctx->pc = 0x17ea7cu;
    // NOP
    // 0x17ea80: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x17EA80u;
    {
        const bool branch_taken_0x17ea80 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17ea80) {
            ctx->pc = 0x17EAA4u;
            goto label_17eaa4;
        }
    }
    ctx->pc = 0x17EA88u;
    // 0x17ea88: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x17ea88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x17ea8c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x17ea8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x17ea90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17ea90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17ea94: 0x0  nop
    ctx->pc = 0x17ea94u;
    // NOP
    // 0x17ea98: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x17ea98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x17ea9c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17EA9Cu;
    {
        const bool branch_taken_0x17ea9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ea9c) {
            ctx->pc = 0x17EABCu;
            goto label_17eabc;
        }
    }
    ctx->pc = 0x17EAA4u;
label_17eaa4:
    // 0x17eaa4: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x17eaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x17eaa8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x17eaa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x17eaac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17eaacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17eab0: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x17eab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17eab4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x17eab4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x17eab8: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x17eab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_17eabc:
    // 0x17eabc: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x17eabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17eac0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17eac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17eac4: 0x8c22f130  lw          $v0, -0xED0($at)
    ctx->pc = 0x17eac4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47F130u));
    // 0x17eac8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x17eac8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17eacc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x17eaccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x17ead0: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x17ead0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x17ead4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17ead4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17ead8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x17ead8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x17eadc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17eadcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17eae0: 0x8c22f130  lw          $v0, -0xED0($at)
    ctx->pc = 0x17eae0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47F130u));
    // 0x17eae4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17eae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17eae8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17eae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17eaec: 0xac22f130  sw          $v0, -0xED0($at)
    ctx->pc = 0x17eaecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x47F130u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F130u, _value); } while (0);
    // 0x17eaf0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17eaf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17eaf4: 0x8c23f130  lw          $v1, -0xED0($at)
    ctx->pc = 0x17eaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x47F130u));
    // 0x17eaf8: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x17eaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x17eafc: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17EAFCu;
    {
        const bool branch_taken_0x17eafc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x17eafc) {
            ctx->pc = 0x17EB0Cu;
            goto label_17eb0c;
        }
    }
    ctx->pc = 0x17EB04u;
    // 0x17eb04: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17eb04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17eb08: 0xac20f130  sw          $zero, -0xED0($at)
    ctx->pc = 0x17eb08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x47F130u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F130u, _value); } while (0);
label_17eb0c:
    // 0x17eb0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17eb0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17eb10: 0x0  nop
    ctx->pc = 0x17eb10u;
    // NOP
    // 0x17eb14: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x17eb14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x17eb18: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x17eb18u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17eb1c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x17EB1Cu;
    {
        const bool branch_taken_0x17eb1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17eb1c) {
            ctx->pc = 0x17EB48u;
            goto label_17eb48;
        }
    }
    ctx->pc = 0x17EB24u;
label_17eb24:
    // 0x17eb24: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x17eb24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x17eb28: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x17eb28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x17eb2c: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x17eb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x17eb30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17eb30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17eb34: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x17eb34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17eb38: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x17eb38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17eb3c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x17eb3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x17eb40: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x17eb40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x17eb44: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17eb44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_17eb48:
    // 0x17eb48: 0x2e020040  sltiu       $v0, $s0, 0x40
    ctx->pc = 0x17eb48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x17eb4c: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x17EB4Cu;
    {
        const bool branch_taken_0x17eb4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17eb4c) {
            ctx->pc = 0x17EB24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17eb24;
        }
    }
    ctx->pc = 0x17EB54u;
    // 0x17eb54: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x17eb54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x17eb58: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17eb58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17eb5c: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x17eb5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17eb60: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x17eb60u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x17eb64: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x17eb64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_17eb68:
    // 0x17eb68: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x17eb68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17eb6c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x17eb6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17eb70: 0xc7ac005c  lwc1        $f12, 0x5C($sp)
    ctx->pc = 0x17eb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17eb74: 0xc040c8c  jal         func_103230
    ctx->pc = 0x17EB74u;
    SET_GPR_U32(ctx, 31, 0x17EB7Cu);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x17EB7Cu;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17EB7Cu) { return; }
    ctx->pc = 0x17EB7Cu;
label_17eb7c:
    // 0x17eb7c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17eb7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17eb80: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x17eb80u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x17eb84: 0x24440190  addiu       $a0, $v0, 0x190
    ctx->pc = 0x17eb84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x17eb88: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x17eb88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17eb8c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x17eb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x17eb90: 0x2446f110  addiu       $a2, $v0, -0xEF0
    ctx->pc = 0x17eb90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963472));
    // 0x17eb94: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x17EB94u;
    SET_GPR_U32(ctx, 31, 0x17EB9Cu);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x17EB9Cu;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17EB9Cu) { return; }
    ctx->pc = 0x17EB9Cu;
label_17eb9c:
    // 0x17eb9c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17eb9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17eba0: 0x8c240af0  lw          $a0, 0xAF0($at)
    ctx->pc = 0x17eba0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x17eba4: 0xc056518  jal         func_159460
    ctx->pc = 0x17EBA4u;
    SET_GPR_U32(ctx, 31, 0x17EBACu);
    ctx->pc = 0x159460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159460u, 0x17EBA4u, 0x17EBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EBACu;
label_17ebac:
    // 0x17ebac: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x17ebacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17ebb0: 0x8c6300a0  lw          $v1, 0xA0($v1)
    ctx->pc = 0x17ebb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 160)));
    // 0x17ebb4: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x17EBB4u;
    {
        const bool branch_taken_0x17ebb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ebb4) {
            ctx->pc = 0x17EC60u;
            goto label_17ec60;
        }
    }
    ctx->pc = 0x17EBBCu;
    // 0x17ebbc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x17ebbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17ebc0: 0x8c62009c  lw          $v0, 0x9C($v1)
    ctx->pc = 0x17ebc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
    // 0x17ebc4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17ebc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17ebc8: 0xac62009c  sw          $v0, 0x9C($v1)
    ctx->pc = 0x17ebc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 156), GPR_U32(ctx, 2));
    // 0x17ebcc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17ebccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17ebd0: 0x8c43009c  lw          $v1, 0x9C($v0)
    ctx->pc = 0x17ebd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x17ebd4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17ebd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17ebd8: 0x8c4200a0  lw          $v0, 0xA0($v0)
    ctx->pc = 0x17ebd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x17ebdc: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x17EBDCu;
    {
        const bool branch_taken_0x17ebdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x17ebdc) {
            ctx->pc = 0x17EC08u;
            goto label_17ec08;
        }
    }
    ctx->pc = 0x17EBE4u;
    // 0x17ebe4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17ebe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17ebe8: 0xac40009c  sw          $zero, 0x9C($v0)
    ctx->pc = 0x17ebe8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 156), GPR_U32(ctx, 0));
    // 0x17ebec: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17ebecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17ebf0: 0xac4000a0  sw          $zero, 0xA0($v0)
    ctx->pc = 0x17ebf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 160), GPR_U32(ctx, 0));
    // 0x17ebf4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17ebf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17ebf8: 0xc4400064  lwc1        $f0, 0x64($v0)
    ctx->pc = 0x17ebf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ebfc: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x17ebfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x17ec00: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x17EC00u;
    {
        const bool branch_taken_0x17ec00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ec00) {
            ctx->pc = 0x17EC4Cu;
            goto label_17ec4c;
        }
    }
    ctx->pc = 0x17EC08u;
label_17ec08:
    // 0x17ec08: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x17ec08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17ec0c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x17ec0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17ec10: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17ec10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17ec14: 0x8c8400a4  lw          $a0, 0xA4($a0)
    ctx->pc = 0x17ec14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x17ec18: 0x8c65009c  lw          $a1, 0x9C($v1)
    ctx->pc = 0x17ec18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
    // 0x17ec1c: 0x8c4600a0  lw          $a2, 0xA0($v0)
    ctx->pc = 0x17ec1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x17ec20: 0xc05fb7c  jal         func_17EDF0
    ctx->pc = 0x17EC20u;
    SET_GPR_U32(ctx, 31, 0x17EC28u);
    ctx->pc = 0x17EDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EDF0u, 0x17EC20u, 0x17EC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EC28u;
label_17ec28:
    // 0x17ec28: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x17ec28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x17ec2c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17ec2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17ec30: 0xc4410064  lwc1        $f1, 0x64($v0)
    ctx->pc = 0x17ec30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17ec34: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17ec34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17ec38: 0xc4400060  lwc1        $f0, 0x60($v0)
    ctx->pc = 0x17ec38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ec3c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x17ec3cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x17ec40: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x17ec40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ec44: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x17ec44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x17ec48: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x17ec48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_17ec4c:
    // 0x17ec4c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17ec4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17ec50: 0x8c240af0  lw          $a0, 0xAF0($at)
    ctx->pc = 0x17ec50u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x17ec54: 0xc7ac0054  lwc1        $f12, 0x54($sp)
    ctx->pc = 0x17ec54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17ec58: 0xc056680  jal         func_159A00
    ctx->pc = 0x17EC58u;
    SET_GPR_U32(ctx, 31, 0x17EC60u);
    ctx->pc = 0x159A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159A00u, 0x17EC58u, 0x17EC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EC60u;
label_17ec60:
    // 0x17ec60: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x17ec60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17ec64: 0x8c8300ac  lw          $v1, 0xAC($a0)
    ctx->pc = 0x17ec64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 172)));
    // 0x17ec68: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x17EC68u;
    {
        const bool branch_taken_0x17ec68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ec68) {
            ctx->pc = 0x17ED18u;
            goto label_17ed18;
        }
    }
    ctx->pc = 0x17EC70u;
    // 0x17ec70: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x17ec70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17ec74: 0x8c6200a8  lw          $v0, 0xA8($v1)
    ctx->pc = 0x17ec74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 168)));
    // 0x17ec78: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x17ec78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17ec7c: 0xac6400a8  sw          $a0, 0xA8($v1)
    ctx->pc = 0x17ec7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 168), GPR_U32(ctx, 4));
    // 0x17ec80: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17ec80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17ec84: 0x8c4300a8  lw          $v1, 0xA8($v0)
    ctx->pc = 0x17ec84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x17ec88: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17ec88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17ec8c: 0x8c4200ac  lw          $v0, 0xAC($v0)
    ctx->pc = 0x17ec8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
    // 0x17ec90: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x17EC90u;
    {
        const bool branch_taken_0x17ec90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x17ec90) {
            ctx->pc = 0x17ECBCu;
            goto label_17ecbc;
        }
    }
    ctx->pc = 0x17EC98u;
    // 0x17ec98: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17ec98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17ec9c: 0xac4000a8  sw          $zero, 0xA8($v0)
    ctx->pc = 0x17ec9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 168), GPR_U32(ctx, 0));
    // 0x17eca0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17eca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17eca4: 0xac4000ac  sw          $zero, 0xAC($v0)
    ctx->pc = 0x17eca4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 172), GPR_U32(ctx, 0));
    // 0x17eca8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x17eca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17ecac: 0xc460006c  lwc1        $f0, 0x6C($v1)
    ctx->pc = 0x17ecacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ecb0: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x17ecb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x17ecb4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x17ECB4u;
    {
        const bool branch_taken_0x17ecb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ecb4) {
            ctx->pc = 0x17ED04u;
            goto label_17ed04;
        }
    }
    ctx->pc = 0x17ECBCu;
label_17ecbc:
    // 0x17ecbc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17ecbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17ecc0: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x17ecc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17ecc4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x17ecc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17ecc8: 0x8c4200b0  lw          $v0, 0xB0($v0)
    ctx->pc = 0x17ecc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x17eccc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x17ecccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17ecd0: 0x8ca500a8  lw          $a1, 0xA8($a1)
    ctx->pc = 0x17ecd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 168)));
    // 0x17ecd4: 0x8c6600ac  lw          $a2, 0xAC($v1)
    ctx->pc = 0x17ecd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
    // 0x17ecd8: 0xc05fb7c  jal         func_17EDF0
    ctx->pc = 0x17ECD8u;
    SET_GPR_U32(ctx, 31, 0x17ECE0u);
    ctx->pc = 0x17EDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EDF0u, 0x17ECD8u, 0x17ECE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ECE0u;
label_17ece0:
    // 0x17ece0: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x17ece0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x17ece4: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x17ece4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17ece8: 0xc4c1006c  lwc1        $f1, 0x6C($a2)
    ctx->pc = 0x17ece8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17ecec: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17ececu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17ecf0: 0xc4400068  lwc1        $f0, 0x68($v0)
    ctx->pc = 0x17ecf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ecf4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x17ecf4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x17ecf8: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x17ecf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ecfc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x17ecfcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x17ed00: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x17ed00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_17ed04:
    // 0x17ed04: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17ed04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17ed08: 0x8c240af0  lw          $a0, 0xAF0($at)
    ctx->pc = 0x17ed08u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x17ed0c: 0xc7ac0054  lwc1        $f12, 0x54($sp)
    ctx->pc = 0x17ed0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17ed10: 0xc0566cc  jal         func_159B30
    ctx->pc = 0x17ED10u;
    SET_GPR_U32(ctx, 31, 0x17ED18u);
    ctx->pc = 0x159B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159B30u, 0x17ED10u, 0x17ED18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ED18u;
label_17ed18:
    // 0x17ed18: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x17ed18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17ed1c: 0x8c6400b8  lw          $a0, 0xB8($v1)
    ctx->pc = 0x17ed1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 184)));
    // 0x17ed20: 0x1080002d  beqz        $a0, . + 4 + (0x2D << 2)
    ctx->pc = 0x17ED20u;
    {
        const bool branch_taken_0x17ed20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ed20) {
            ctx->pc = 0x17EDD8u;
            goto label_17edd8;
        }
    }
    ctx->pc = 0x17ED28u;
    // 0x17ed28: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x17ed28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17ed2c: 0x8ca600b4  lw          $a2, 0xB4($a1)
    ctx->pc = 0x17ed2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 180)));
    // 0x17ed30: 0x24c40001  addiu       $a0, $a2, 0x1
    ctx->pc = 0x17ed30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x17ed34: 0xaca400b4  sw          $a0, 0xB4($a1)
    ctx->pc = 0x17ed34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 180), GPR_U32(ctx, 4));
    // 0x17ed38: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x17ed38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17ed3c: 0x8ca200b4  lw          $v0, 0xB4($a1)
    ctx->pc = 0x17ed3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 180)));
    // 0x17ed40: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x17ed40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17ed44: 0x8c8300b8  lw          $v1, 0xB8($a0)
    ctx->pc = 0x17ed44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
    // 0x17ed48: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x17ED48u;
    {
        const bool branch_taken_0x17ed48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x17ed48) {
            ctx->pc = 0x17ED74u;
            goto label_17ed74;
        }
    }
    ctx->pc = 0x17ED50u;
    // 0x17ed50: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x17ed50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17ed54: 0xac8000b4  sw          $zero, 0xB4($a0)
    ctx->pc = 0x17ed54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 180), GPR_U32(ctx, 0));
    // 0x17ed58: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x17ed58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17ed5c: 0xaca000b8  sw          $zero, 0xB8($a1)
    ctx->pc = 0x17ed5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 184), GPR_U32(ctx, 0));
    // 0x17ed60: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x17ed60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17ed64: 0xc4c00074  lwc1        $f0, 0x74($a2)
    ctx->pc = 0x17ed64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ed68: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x17ed68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x17ed6c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x17ED6Cu;
    {
        const bool branch_taken_0x17ed6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ed6c) {
            ctx->pc = 0x17EDB8u;
            goto label_17edb8;
        }
    }
    ctx->pc = 0x17ED74u;
label_17ed74:
    // 0x17ed74: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17ed74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17ed78: 0x8fb10068  lw          $s1, 0x68($sp)
    ctx->pc = 0x17ed78u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17ed7c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x17ed7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17ed80: 0x8c4400bc  lw          $a0, 0xBC($v0)
    ctx->pc = 0x17ed80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x17ed84: 0x8e2500b4  lw          $a1, 0xB4($s1)
    ctx->pc = 0x17ed84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
    // 0x17ed88: 0x8c6600b8  lw          $a2, 0xB8($v1)
    ctx->pc = 0x17ed88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 184)));
    // 0x17ed8c: 0xc05fb7c  jal         func_17EDF0
    ctx->pc = 0x17ED8Cu;
    SET_GPR_U32(ctx, 31, 0x17ED94u);
    ctx->pc = 0x17EDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EDF0u, 0x17ED8Cu, 0x17ED94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ED94u;
label_17ed94:
    // 0x17ed94: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x17ed94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x17ed98: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17ed98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17ed9c: 0xc4410074  lwc1        $f1, 0x74($v0)
    ctx->pc = 0x17ed9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17eda0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17eda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17eda4: 0xc4400070  lwc1        $f0, 0x70($v0)
    ctx->pc = 0x17eda4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17eda8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x17eda8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x17edac: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x17edacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17edb0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x17edb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x17edb4: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x17edb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_17edb8:
    // 0x17edb8: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x17edb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17edbc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17edbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17edc0: 0x8c230af0  lw          $v1, 0xAF0($at)
    ctx->pc = 0x17edc0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x17edc4: 0xe46001bc  swc1        $f0, 0x1BC($v1)
    ctx->pc = 0x17edc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 444), bits); }
    // 0x17edc8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17edc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17edcc: 0x8c240af0  lw          $a0, 0xAF0($at)
    ctx->pc = 0x17edccu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x17edd0: 0xc056488  jal         func_159220
    ctx->pc = 0x17EDD0u;
    SET_GPR_U32(ctx, 31, 0x17EDD8u);
    ctx->pc = 0x159220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159220u, 0x17EDD0u, 0x17EDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EDD8u;
label_17edd8:
    // 0x17edd8: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x17edd8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17eddc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17eddcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ede0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17ede0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ede4: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x17ede4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x17ede8: 0x3e00008  jr          $ra
    ctx->pc = 0x17EDE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17EDE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17EDF0u;
}
