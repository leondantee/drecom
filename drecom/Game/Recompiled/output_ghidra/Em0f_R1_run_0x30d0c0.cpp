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

// Function: Em0f_R1_run
// Address: 0x30d0c0 - 0x30d368
void Em0f_R1_run_0x30d0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0f_R1_run_0x30d0c0");
#endif

    switch (ctx->pc) {
        case 0x30d12cu: goto label_30d12c;
        case 0x30d188u: goto label_30d188;
        case 0x30d19cu: goto label_30d19c;
        case 0x30d1d8u: goto label_30d1d8;
        case 0x30d1ecu: goto label_30d1ec;
        case 0x30d214u: goto label_30d214;
        case 0x30d220u: goto label_30d220;
        case 0x30d230u: goto label_30d230;
        case 0x30d23cu: goto label_30d23c;
        case 0x30d268u: goto label_30d268;
        case 0x30d288u: goto label_30d288;
        case 0x30d2a8u: goto label_30d2a8;
        case 0x30d2f0u: goto label_30d2f0;
        case 0x30d2fcu: goto label_30d2fc;
        case 0x30d30cu: goto label_30d30c;
        case 0x30d318u: goto label_30d318;
        default: break;
    }

    ctx->pc = 0x30d0c0u;

    // 0x30d0c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30d0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30d0c4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x30d0c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x30d0c8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x30d0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x30d0cc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30d0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d0d0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x30d0d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x30d0d4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x30d0d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x30d0d8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x30d0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30d0dc: 0x1083007c  beq         $a0, $v1, . + 4 + (0x7C << 2)
    ctx->pc = 0x30D0DCu;
    {
        const bool branch_taken_0x30d0dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x30d0dc) {
            ctx->pc = 0x30D2D0u;
            goto label_30d2d0;
        }
    }
    ctx->pc = 0x30D0E4u;
    // 0x30d0e4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x30d0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30d0e8: 0x10830057  beq         $a0, $v1, . + 4 + (0x57 << 2)
    ctx->pc = 0x30D0E8u;
    {
        const bool branch_taken_0x30d0e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x30d0e8) {
            ctx->pc = 0x30D248u;
            goto label_30d248;
        }
    }
    ctx->pc = 0x30D0F0u;
    // 0x30d0f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30d0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30d0f4: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x30D0F4u;
    {
        const bool branch_taken_0x30d0f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x30d0f4) {
            ctx->pc = 0x30D144u;
            goto label_30d144;
        }
    }
    ctx->pc = 0x30D0FCu;
    // 0x30d0fc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30D0FCu;
    {
        const bool branch_taken_0x30d0fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d0fc) {
            ctx->pc = 0x30D10Cu;
            goto label_30d10c;
        }
    }
    ctx->pc = 0x30D104u;
    // 0x30d104: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x30D104u;
    {
        const bool branch_taken_0x30d104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d104) {
            ctx->pc = 0x30D358u;
            goto label_30d358;
        }
    }
    ctx->pc = 0x30D10Cu;
label_30d10c:
    // 0x30d10c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30d10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d110: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30d110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d114: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x30d114u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x30d118: 0x24061e02  addiu       $a2, $zero, 0x1E02
    ctx->pc = 0x30d118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7682));
    // 0x30d11c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x30d11cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30d120: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x30d120u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30d124: 0xc0965d0  jal         func_259740
    ctx->pc = 0x30D124u;
    SET_GPR_U32(ctx, 31, 0x30D12Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x30D124u, 0x30D12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D12Cu;
label_30d12c:
    // 0x30d12c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30d12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d130: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x30d130u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x30d134: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30d134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d138: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x30d138u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x30d13c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30d13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30d140: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x30d140u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_30d144:
    // 0x30d144: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30d144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d148: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x30d148u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x30d14c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x30d14cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x30d150: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x30d150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x30d154: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x30D154u;
    {
        const bool branch_taken_0x30d154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d154) {
            ctx->pc = 0x30D1ACu;
            goto label_30d1ac;
        }
    }
    ctx->pc = 0x30D15Cu;
    // 0x30d15c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30d15cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d160: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x30d160u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d164: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30d164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d168: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x30d168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x30d16c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x30d16cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x30d170: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x30d170u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30d174: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x30d174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x30d178: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x30d178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30d17c: 0x24651240  addiu       $a1, $v1, 0x1240
    ctx->pc = 0x30d17cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4672));
    // 0x30d180: 0xc05c848  jal         func_172120
    ctx->pc = 0x30D180u;
    SET_GPR_U32(ctx, 31, 0x30D188u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x30D180u, 0x30D188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D188u;
label_30d188:
    // 0x30d188: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30d188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d18c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x30d18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30d190: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x30d190u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x30d194: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x30D194u;
    SET_GPR_U32(ctx, 31, 0x30D19Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x30D194u, 0x30D19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D19Cu;
label_30d19c:
    // 0x30d19c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30d19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d1a0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x30d1a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x30d1a4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x30D1A4u;
    {
        const bool branch_taken_0x30d1a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d1a4) {
            ctx->pc = 0x30D1F4u;
            goto label_30d1f4;
        }
    }
    ctx->pc = 0x30D1ACu;
label_30d1ac:
    // 0x30d1ac: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30d1acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d1b0: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x30d1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d1b4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30d1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d1b8: 0x3c023b83  lui         $v0, 0x3B83
    ctx->pc = 0x30d1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15235 << 16));
    // 0x30d1bc: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x30d1bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x30d1c0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x30d1c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30d1c4: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x30d1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x30d1c8: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x30d1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30d1cc: 0x24651240  addiu       $a1, $v1, 0x1240
    ctx->pc = 0x30d1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4672));
    // 0x30d1d0: 0xc05c848  jal         func_172120
    ctx->pc = 0x30D1D0u;
    SET_GPR_U32(ctx, 31, 0x30D1D8u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x30D1D0u, 0x30D1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D1D8u;
label_30d1d8:
    // 0x30d1d8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30d1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d1dc: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x30d1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30d1e0: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x30d1e0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x30d1e4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x30D1E4u;
    SET_GPR_U32(ctx, 31, 0x30D1ECu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x30D1E4u, 0x30D1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D1ECu;
label_30d1ec:
    // 0x30d1ec: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30d1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d1f0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x30d1f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_30d1f4:
    // 0x30d1f4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30d1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d1f8: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x30d1f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x30d1fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30d1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30d200: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x30d200u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x30d204: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30d204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d208: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30d208u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30d20c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x30D20Cu;
    SET_GPR_U32(ctx, 31, 0x30D214u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x30D20Cu, 0x30D214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D214u;
label_30d214:
    // 0x30d214: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30d214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d218: 0xc05cd10  jal         func_173440
    ctx->pc = 0x30D218u;
    SET_GPR_U32(ctx, 31, 0x30D220u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x30D218u, 0x30D220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D220u;
label_30d220:
    // 0x30d220: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30d220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d224: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30d224u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30d228: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x30D228u;
    SET_GPR_U32(ctx, 31, 0x30D230u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x30D228u, 0x30D230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D230u;
label_30d230:
    // 0x30d230: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30d230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d234: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x30D234u;
    SET_GPR_U32(ctx, 31, 0x30D23Cu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x30D234u, 0x30D23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D23Cu;
label_30d23c:
    // 0x30d23c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30d23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d240: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x30D240u;
    {
        const bool branch_taken_0x30d240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d240) {
            ctx->pc = 0x30D358u;
            goto label_30d358;
        }
    }
    ctx->pc = 0x30D248u;
label_30d248:
    // 0x30d248: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30d248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d24c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30d24cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d250: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x30d250u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x30d254: 0x24061402  addiu       $a2, $zero, 0x1402
    ctx->pc = 0x30d254u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5122));
    // 0x30d258: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x30d258u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30d25c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x30d25cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30d260: 0xc0965d0  jal         func_259740
    ctx->pc = 0x30D260u;
    SET_GPR_U32(ctx, 31, 0x30D268u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x30D260u, 0x30D268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D268u;
label_30d268:
    // 0x30d268: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30d268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d26c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x30d26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30d270: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30d270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d274: 0x24421334  addiu       $v0, $v0, 0x1334
    ctx->pc = 0x30d274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4916));
    // 0x30d278: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x30d278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30d27c: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x30d27cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x30d280: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x30D280u;
    SET_GPR_U32(ctx, 31, 0x30D288u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x30D280u, 0x30D288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D288u;
label_30d288:
    // 0x30d288: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30d288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d28c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x30d28cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x30d290: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30d290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d294: 0x24421334  addiu       $v0, $v0, 0x1334
    ctx->pc = 0x30d294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4916));
    // 0x30d298: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30d298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d29c: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x30d29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30d2a0: 0xc0c3640  jal         func_30D900
    ctx->pc = 0x30D2A0u;
    SET_GPR_U32(ctx, 31, 0x30D2A8u);
    ctx->pc = 0x30D900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D900u, 0x30D2A0u, 0x30D2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D2A8u;
label_30d2a8:
    // 0x30d2a8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30d2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d2ac: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x30d2acu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x30d2b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30d2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30d2b4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30d2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d2b8: 0x8c421310  lw          $v0, 0x1310($v0)
    ctx->pc = 0x30d2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4880)));
    // 0x30d2bc: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x30d2bcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x30d2c0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30d2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d2c4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x30d2c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x30d2c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30d2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30d2cc: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x30d2ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_30d2d0:
    // 0x30d2d0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30d2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d2d4: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x30d2d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x30d2d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30d2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30d2dc: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x30d2dcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x30d2e0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30d2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d2e4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30d2e4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30d2e8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x30D2E8u;
    SET_GPR_U32(ctx, 31, 0x30D2F0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x30D2E8u, 0x30D2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D2F0u;
label_30d2f0:
    // 0x30d2f0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30d2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d2f4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x30D2F4u;
    SET_GPR_U32(ctx, 31, 0x30D2FCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x30D2F4u, 0x30D2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D2FCu;
label_30d2fc:
    // 0x30d2fc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30d2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d300: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30d300u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30d304: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x30D304u;
    SET_GPR_U32(ctx, 31, 0x30D30Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x30D304u, 0x30D30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D30Cu;
label_30d30c:
    // 0x30d30c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30d30cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d310: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x30D310u;
    SET_GPR_U32(ctx, 31, 0x30D318u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x30D310u, 0x30D318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D318u;
label_30d318:
    // 0x30d318: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30d318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d31c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x30d31cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x30d320: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x30D320u;
    {
        const bool branch_taken_0x30d320 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d320) {
            ctx->pc = 0x30D358u;
            goto label_30d358;
        }
    }
    ctx->pc = 0x30D328u;
    // 0x30d328: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30d328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30d32c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30d32cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d330: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x30d330u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x30d334: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30d334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30d338: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30d338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d33c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x30d33cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x30d340: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30d340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d344: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x30d344u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30d348: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30d348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d34c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x30d34cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x30d350: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30d350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d354: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30d354u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_30d358:
    // 0x30d358: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x30d358u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30d35c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x30d35cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30d360: 0x3e00008  jr          $ra
    ctx->pc = 0x30D360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D368u;
}
