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

// Function: Em0f_R1_atk_l
// Address: 0x30e490 - 0x30e6a0
void Em0f_R1_atk_l_0x30e490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0f_R1_atk_l_0x30e490");
#endif

    switch (ctx->pc) {
        case 0x30e4e8u: goto label_30e4e8;
        case 0x30e57cu: goto label_30e57c;
        case 0x30e5bcu: goto label_30e5bc;
        case 0x30e5fcu: goto label_30e5fc;
        case 0x30e60cu: goto label_30e60c;
        case 0x30e618u: goto label_30e618;
        case 0x30e628u: goto label_30e628;
        case 0x30e634u: goto label_30e634;
        default: break;
    }

    ctx->pc = 0x30e490u;

    // 0x30e490: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x30e490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x30e494: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x30e494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x30e498: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30e498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30e49c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x30e49cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x30e4a0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30e4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e4a4: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x30e4a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x30e4a8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x30e4a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x30e4ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30e4acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30e4b0: 0x1083001a  beq         $a0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x30E4B0u;
    {
        const bool branch_taken_0x30e4b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x30e4b0) {
            ctx->pc = 0x30E51Cu;
            goto label_30e51c;
        }
    }
    ctx->pc = 0x30E4B8u;
    // 0x30e4b8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30E4B8u;
    {
        const bool branch_taken_0x30e4b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e4b8) {
            ctx->pc = 0x30E4C8u;
            goto label_30e4c8;
        }
    }
    ctx->pc = 0x30E4C0u;
    // 0x30e4c0: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x30E4C0u;
    {
        const bool branch_taken_0x30e4c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e4c0) {
            ctx->pc = 0x30E68Cu;
            goto label_30e68c;
        }
    }
    ctx->pc = 0x30E4C8u;
label_30e4c8:
    // 0x30e4c8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30e4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e4cc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30e4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e4d0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x30e4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x30e4d4: 0x24062813  addiu       $a2, $zero, 0x2813
    ctx->pc = 0x30e4d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10259));
    // 0x30e4d8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x30e4d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30e4dc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x30e4dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30e4e0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x30E4E0u;
    SET_GPR_U32(ctx, 31, 0x30E4E8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x30E4E0u, 0x30E4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E4E8u;
label_30e4e8:
    // 0x30e4e8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30e4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e4ec: 0x8c831338  lw          $v1, 0x1338($a0)
    ctx->pc = 0x30e4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4920)));
    // 0x30e4f0: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x30e4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x30e4f4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x30e4f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30e4f8: 0xac821338  sw          $v0, 0x1338($a0)
    ctx->pc = 0x30e4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4920), GPR_U32(ctx, 2));
    // 0x30e4fc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30e4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e500: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x30e500u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x30e504: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30e504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e508: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x30e508u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x30e50c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30e50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e510: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x30e510u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x30e514: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30e514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30e518: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x30e518u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_30e51c:
    // 0x30e51c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30e51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e520: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x30e520u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x30e524: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x30e524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x30e528: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x30e528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x30e52c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x30E52Cu;
    {
        const bool branch_taken_0x30e52c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e52c) {
            ctx->pc = 0x30E5A0u;
            goto label_30e5a0;
        }
    }
    ctx->pc = 0x30E534u;
    // 0x30e534: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30e534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e538: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x30e538u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x30e53c: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x30E53Cu;
    {
        const bool branch_taken_0x30e53c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30e53c) {
            ctx->pc = 0x30E5A0u;
            goto label_30e5a0;
        }
    }
    ctx->pc = 0x30E544u;
    // 0x30e544: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x30e544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x30e548: 0x244299a0  addiu       $v0, $v0, -0x6660
    ctx->pc = 0x30e548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941088));
    // 0x30e54c: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x30e54cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30e550: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x30e550u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x3999A0u));
    // 0x30e554: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x30e554u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x30e558: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30e558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e55c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30e55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30e560: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30e560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e564: 0x24450840  addiu       $a1, $v0, 0x840
    ctx->pc = 0x30e564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2112));
    // 0x30e568: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x30e568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30e56c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x30e56cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x30e570: 0x24478d50  addiu       $a3, $v0, -0x72B0
    ctx->pc = 0x30e570u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937936));
    // 0x30e574: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x30E574u;
    SET_GPR_U32(ctx, 31, 0x30E57Cu);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x30E574u, 0x30E57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E57Cu;
label_30e57c:
    // 0x30e57c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x30e57cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30e580: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30E580u;
    {
        const bool branch_taken_0x30e580 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e580) {
            ctx->pc = 0x30E5A0u;
            goto label_30e5a0;
        }
    }
    ctx->pc = 0x30E588u;
    // 0x30e588: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30e588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30e58c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30e58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e590: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x30e590u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x30e594: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30e594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30e598: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30e598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e59c: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x30e59cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
label_30e5a0:
    // 0x30e5a0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30e5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e5a4: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x30e5a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x30e5a8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30E5A8u;
    {
        const bool branch_taken_0x30e5a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e5a8) {
            ctx->pc = 0x30E5C4u;
            goto label_30e5c4;
        }
    }
    ctx->pc = 0x30E5B0u;
    // 0x30e5b0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30e5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e5b4: 0xc0c4544  jal         func_311510
    ctx->pc = 0x30E5B4u;
    SET_GPR_U32(ctx, 31, 0x30E5BCu);
    ctx->pc = 0x311510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311510u, 0x30E5B4u, 0x30E5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E5BCu;
label_30e5bc:
    // 0x30e5bc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30e5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e5c0: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x30e5c0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
label_30e5c4:
    // 0x30e5c4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x30e5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x30e5c8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x30e5c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30e5cc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x30e5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x30e5d0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x30e5d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30e5d4: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x30e5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x30e5d8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x30e5d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x30e5dc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30e5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e5e0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30e5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30e5e4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x30e5e4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30e5e8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30e5e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30e5ec: 0x24460330  addiu       $a2, $v0, 0x330
    ctx->pc = 0x30e5ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 816));
    // 0x30e5f0: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x30e5f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x30e5f4: 0xc086488  jal         func_219220
    ctx->pc = 0x30E5F4u;
    SET_GPR_U32(ctx, 31, 0x30E5FCu);
    ctx->pc = 0x219220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219220u, 0x30E5F4u, 0x30E5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E5FCu;
label_30e5fc:
    // 0x30e5fc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30e5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e600: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30e600u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30e604: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x30E604u;
    SET_GPR_U32(ctx, 31, 0x30E60Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x30E604u, 0x30E60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E60Cu;
label_30e60c:
    // 0x30e60c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30e60cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e610: 0xc05cd10  jal         func_173440
    ctx->pc = 0x30E610u;
    SET_GPR_U32(ctx, 31, 0x30E618u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x30E610u, 0x30E618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E618u;
label_30e618:
    // 0x30e618: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30e618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e61c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30e61cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30e620: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x30E620u;
    SET_GPR_U32(ctx, 31, 0x30E628u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x30E620u, 0x30E628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E628u;
label_30e628:
    // 0x30e628: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30e628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e62c: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x30E62Cu;
    SET_GPR_U32(ctx, 31, 0x30E634u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x30E62Cu, 0x30E634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E634u;
label_30e634:
    // 0x30e634: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30e634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e638: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x30e638u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x30e63c: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x30E63Cu;
    {
        const bool branch_taken_0x30e63c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e63c) {
            ctx->pc = 0x30E68Cu;
            goto label_30e68c;
        }
    }
    ctx->pc = 0x30E644u;
    // 0x30e644: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30e644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30e648: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30e648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e64c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x30e64cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x30e650: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30e650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30e654: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30e654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e658: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x30e658u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x30e65c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30e65cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e660: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x30e660u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30e664: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30e664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e668: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x30e668u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x30e66c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30e66cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e670: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30e670u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x30e674: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x30e674u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e678: 0x8ca41338  lw          $a0, 0x1338($a1)
    ctx->pc = 0x30e678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4920)));
    // 0x30e67c: 0x3c03fbff  lui         $v1, 0xFBFF
    ctx->pc = 0x30e67cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64511 << 16));
    // 0x30e680: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x30e680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x30e684: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x30e684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x30e688: 0xaca31338  sw          $v1, 0x1338($a1)
    ctx->pc = 0x30e688u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4920), GPR_U32(ctx, 3));
label_30e68c:
    // 0x30e68c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x30e68cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30e690: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30e690u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30e694: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x30e694u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x30e698: 0x3e00008  jr          $ra
    ctx->pc = 0x30E698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30E698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30E6A0u;
}
