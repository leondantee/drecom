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

// Function: Em0d_morph
// Address: 0x241130 - 0x2412c8
void Em0d_morph_0x241130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0d_morph_0x241130");
#endif

    switch (ctx->pc) {
        case 0x2411e0u: goto label_2411e0;
        case 0x241200u: goto label_241200;
        case 0x241280u: goto label_241280;
        case 0x2412a0u: goto label_2412a0;
        default: break;
    }

    ctx->pc = 0x241130u;

    // 0x241130: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x241130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x241134: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x241134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x241138: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x241138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x24113c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x24113cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x241140: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x241140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x241144: 0x90630072  lbu         $v1, 0x72($v1)
    ctx->pc = 0x241144u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 114)));
    // 0x241148: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x241148u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x24114c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x24114cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x241150: 0x10830059  beq         $a0, $v1, . + 4 + (0x59 << 2)
    ctx->pc = 0x241150u;
    {
        const bool branch_taken_0x241150 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x241150) {
            ctx->pc = 0x2412B8u;
            goto label_2412b8;
        }
    }
    ctx->pc = 0x241158u;
    // 0x241158: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x241158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24115c: 0x10830030  beq         $a0, $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x24115Cu;
    {
        const bool branch_taken_0x24115c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x24115c) {
            ctx->pc = 0x241220u;
            goto label_241220;
        }
    }
    ctx->pc = 0x241164u;
    // 0x241164: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x241164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x241168: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x241168u;
    {
        const bool branch_taken_0x241168 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x241168) {
            ctx->pc = 0x241180u;
            goto label_241180;
        }
    }
    ctx->pc = 0x241170u;
    // 0x241170: 0x10800051  beqz        $a0, . + 4 + (0x51 << 2)
    ctx->pc = 0x241170u;
    {
        const bool branch_taken_0x241170 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x241170) {
            ctx->pc = 0x2412B8u;
            goto label_2412b8;
        }
    }
    ctx->pc = 0x241178u;
    // 0x241178: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x241178u;
    {
        const bool branch_taken_0x241178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x241178) {
            ctx->pc = 0x2412B8u;
            goto label_2412b8;
        }
    }
    ctx->pc = 0x241180u;
label_241180:
    // 0x241180: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x241180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x241184: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x241184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x241188: 0x90630070  lbu         $v1, 0x70($v1)
    ctx->pc = 0x241188u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x24118c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x24118cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x241190: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x241190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x241194: 0x10830048  beq         $a0, $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x241194u;
    {
        const bool branch_taken_0x241194 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x241194) {
            ctx->pc = 0x2412B8u;
            goto label_2412b8;
        }
    }
    ctx->pc = 0x24119Cu;
    // 0x24119c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24119cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2411a0: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2411A0u;
    {
        const bool branch_taken_0x2411a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2411a0) {
            ctx->pc = 0x2411F0u;
            goto label_2411f0;
        }
    }
    ctx->pc = 0x2411A8u;
    // 0x2411a8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2411A8u;
    {
        const bool branch_taken_0x2411a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2411a8) {
            ctx->pc = 0x2411B8u;
            goto label_2411b8;
        }
    }
    ctx->pc = 0x2411B0u;
    // 0x2411b0: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x2411B0u;
    {
        const bool branch_taken_0x2411b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2411b0) {
            ctx->pc = 0x2412B8u;
            goto label_2412b8;
        }
    }
    ctx->pc = 0x2411B8u;
label_2411b8:
    // 0x2411b8: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x2411b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x2411bc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2411bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2411c0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2411c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2411c4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2411c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2411c8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2411c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2411cc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2411ccu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2411d0: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x2411d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2411d4: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x2411d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2411d8: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x2411D8u;
    SET_GPR_U32(ctx, 31, 0x2411E0u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x2411D8u, 0x2411E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2411E0u;
label_2411e0:
    // 0x2411e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2411e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2411e4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2411e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2411e8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2411e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2411ec: 0xa0430070  sb          $v1, 0x70($v0)
    ctx->pc = 0x2411ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 112), (uint8_t)GPR_U32(ctx, 3));
label_2411f0:
    // 0x2411f0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2411f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2411f4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2411f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2411f8: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x2411F8u;
    SET_GPR_U32(ctx, 31, 0x241200u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x2411F8u, 0x241200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241200u;
label_241200:
    // 0x241200: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x241200u;
    {
        const bool branch_taken_0x241200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x241200) {
            ctx->pc = 0x2412B8u;
            goto label_2412b8;
        }
    }
    ctx->pc = 0x241208u;
    // 0x241208: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x241208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24120c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x24120cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x241210: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x241210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x241214: 0xa0640070  sb          $a0, 0x70($v1)
    ctx->pc = 0x241214u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 112), (uint8_t)GPR_U32(ctx, 4));
    // 0x241218: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x241218u;
    {
        const bool branch_taken_0x241218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x241218) {
            ctx->pc = 0x2412B8u;
            goto label_2412b8;
        }
    }
    ctx->pc = 0x241220u;
label_241220:
    // 0x241220: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x241220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x241224: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x241224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x241228: 0x90630070  lbu         $v1, 0x70($v1)
    ctx->pc = 0x241228u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x24122c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x24122cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x241230: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x241230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x241234: 0x10830020  beq         $a0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x241234u;
    {
        const bool branch_taken_0x241234 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x241234) {
            ctx->pc = 0x2412B8u;
            goto label_2412b8;
        }
    }
    ctx->pc = 0x24123Cu;
    // 0x24123c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24123cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x241240: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x241240u;
    {
        const bool branch_taken_0x241240 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x241240) {
            ctx->pc = 0x241290u;
            goto label_241290;
        }
    }
    ctx->pc = 0x241248u;
    // 0x241248: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x241248u;
    {
        const bool branch_taken_0x241248 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x241248) {
            ctx->pc = 0x241258u;
            goto label_241258;
        }
    }
    ctx->pc = 0x241250u;
    // 0x241250: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x241250u;
    {
        const bool branch_taken_0x241250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x241250) {
            ctx->pc = 0x2412B8u;
            goto label_2412b8;
        }
    }
    ctx->pc = 0x241258u;
label_241258:
    // 0x241258: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x241258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x24125c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x24125cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x241260: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x241260u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x241264: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x241264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x241268: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x241268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x24126c: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x24126cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x241270: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x241270u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x241274: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x241274u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x241278: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x241278u;
    SET_GPR_U32(ctx, 31, 0x241280u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x241278u, 0x241280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241280u;
label_241280:
    // 0x241280: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x241280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x241284: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x241284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x241288: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x241288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x24128c: 0xa0430070  sb          $v1, 0x70($v0)
    ctx->pc = 0x24128cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 112), (uint8_t)GPR_U32(ctx, 3));
label_241290:
    // 0x241290: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x241290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x241294: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x241294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x241298: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x241298u;
    SET_GPR_U32(ctx, 31, 0x2412A0u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x241298u, 0x2412A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2412A0u;
label_2412a0:
    // 0x2412a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2412A0u;
    {
        const bool branch_taken_0x2412a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2412a0) {
            ctx->pc = 0x2412B8u;
            goto label_2412b8;
        }
    }
    ctx->pc = 0x2412A8u;
    // 0x2412a8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2412a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2412ac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2412acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2412b0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2412b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2412b4: 0xa0640070  sb          $a0, 0x70($v1)
    ctx->pc = 0x2412b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 112), (uint8_t)GPR_U32(ctx, 4));
label_2412b8:
    // 0x2412b8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2412b8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2412bc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2412bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2412c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2412C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2412C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2412C8u;
}
