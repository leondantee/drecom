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

// Function: entry_001ad87c
// Address: 0x1ad87c - 0x1ad9e8
void entry_001ad87c_0x1ad87c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad87c_0x1ad87c");
#endif

    switch (ctx->pc) {
        case 0x1ad93cu: goto label_1ad93c;
        case 0x1ad9e0u: goto label_1ad9e0;
        default: break;
    }

    ctx->pc = 0x1ad87cu;

label_1ad87c:
    // 0x1ad87c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1ad87cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1ad880:
    // 0x1ad880: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1ad880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1ad884:
    // 0x1ad884: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ad884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1ad888:
    // 0x1ad888: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1ad888u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_1ad88c:
    // 0x1ad88c: 0x8c33b490  lw          $s3, -0x4B70($at)
    ctx->pc = 0x1ad88cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294947984)));
label_1ad890:
    // 0x1ad890: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1ad890u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1ad894:
    // 0x1ad894: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1ad894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1ad898:
    // 0x1ad898: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ad898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1ad89c:
    // 0x1ad89c: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1ad89cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_1ad8a0:
    // 0x1ad8a0: 0x8c22b4a0  lw          $v0, -0x4B60($at)
    ctx->pc = 0x1ad8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948000)));
label_1ad8a4:
    // 0x1ad8a4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1ad8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1ad8a8:
    // 0x1ad8a8: 0x2621823  subu        $v1, $s3, $v0
    ctx->pc = 0x1ad8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_1ad8ac:
    // 0x1ad8ac: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x1ad8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1ad8b0:
    // 0x1ad8b0: 0x3a182  srl         $s4, $v1, 6
    ctx->pc = 0x1ad8b0u;
    SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
label_1ad8b4:
    // 0x1ad8b4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1ad8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1ad8b8:
    // 0x1ad8b8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1ad8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1ad8bc:
    // 0x1ad8bc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ad8bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1ad8c0:
    // 0x1ad8c0: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1ad8c0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_1ad8c4:
    // 0x1ad8c4: 0x8c32b4a0  lw          $s2, -0x4B60($at)
    ctx->pc = 0x1ad8c4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948000)));
label_1ad8c8:
    // 0x1ad8c8: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x1ad8c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
label_1ad8cc:
    // 0x1ad8cc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1ad8ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_1ad8d0:
    // 0x1ad8d0: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x1ad8d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_1ad8d4:
    // 0x1ad8d4: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x1ad8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_1ad8d8:
    // 0x1ad8d8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ad8d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1ad8dc:
    // 0x1ad8dc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ad8dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1ad8e0:
    // 0x1ad8e0: 0x3c020164  lui         $v0, 0x164
    ctx->pc = 0x1ad8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)356 << 16));
label_1ad8e4:
    // 0x1ad8e4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1ad8e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_1ad8e8:
    // 0x1ad8e8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ad8e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1ad8ec:
    // 0x1ad8ec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ad8ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1ad8f0:
    // 0x1ad8f0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1ad8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1ad8f4:
    // 0x1ad8f4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ad8f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1ad8f8:
    // 0x1ad8f8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1ad8f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1ad8fc:
    // 0x1ad8fc: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x1ad8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
label_1ad900:
    // 0x1ad900: 0x24024141  addiu       $v0, $zero, 0x4141
    ctx->pc = 0x1ad900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16705));
label_1ad904:
    // 0x1ad904: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x1ad904u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
label_1ad908:
    // 0x1ad908: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1ad908u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1ad90c:
    // 0x1ad90c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1ad90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1ad910:
    // 0x1ad910: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x1ad910u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
label_1ad914:
    // 0x1ad914: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ad914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1ad918:
    // 0x1ad918: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1ad918u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_1ad91c:
    // 0x1ad91c: 0xc42cb4f0  lwc1        $f12, -0x4B10($at)
    ctx->pc = 0x1ad91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294948080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1ad920:
    // 0x1ad920: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1ad920u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1ad924:
    // 0x1ad924: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1ad924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1ad928:
    // 0x1ad928: 0x24428210  addiu       $v0, $v0, -0x7DF0
    ctx->pc = 0x1ad928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935056));
label_1ad92c:
    // 0x1ad92c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ad92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ad930:
    // 0x1ad930: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ad930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ad934:
    // 0x1ad934: 0x40f809  jalr        $v0
label_1ad938:
    if (ctx->pc == 0x1AD938u) {
        ctx->pc = 0x1AD93Cu;
        goto label_1ad93c;
    }
    ctx->pc = 0x1AD934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AD93Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD934u, 0x1AD93Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AD93Cu;
label_1ad93c:
    // 0x1ad93c: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x1ad93cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1ad940:
    // 0x1ad940: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ad940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1ad944:
    // 0x1ad944: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1ad944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_1ad948:
    // 0x1ad948: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ad948u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1ad94c:
    // 0x1ad94c: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x1ad94cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1ad950:
    // 0x1ad950: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1ad950u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1ad954:
    // 0x1ad954: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1ad954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ad958:
    // 0x1ad958: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ad958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1ad95c:
    // 0x1ad95c: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1ad95cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_1ad960:
    // 0x1ad960: 0x8c22b470  lw          $v0, -0x4B90($at)
    ctx->pc = 0x1ad960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294947952)));
label_1ad964:
    // 0x1ad964: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1ad964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1ad968:
    // 0x1ad968: 0x2621823  subu        $v1, $s3, $v0
    ctx->pc = 0x1ad968u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_1ad96c:
    // 0x1ad96c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1ad96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1ad970:
    // 0x1ad970: 0x3a102  srl         $s4, $v1, 4
    ctx->pc = 0x1ad970u;
    SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_1ad974:
    // 0x1ad974: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ad974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1ad978:
    // 0x1ad978: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1ad978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_1ad97c:
    // 0x1ad97c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ad97cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1ad980:
    // 0x1ad980: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x1ad980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1ad984:
    // 0x1ad984: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1ad984u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1ad988:
    // 0x1ad988: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1ad988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ad98c:
    // 0x1ad98c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ad98cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1ad990:
    // 0x1ad990: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1ad990u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_1ad994:
    // 0x1ad994: 0x8c32b470  lw          $s2, -0x4B90($at)
    ctx->pc = 0x1ad994u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294947952)));
label_1ad998:
    // 0x1ad998: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1ad998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_1ad99c:
    // 0x1ad99c: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x1ad99cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
label_1ad9a0:
    // 0x1ad9a0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ad9a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1ad9a4:
    // 0x1ad9a4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1ad9a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_1ad9a8:
    // 0x1ad9a8: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x1ad9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
label_1ad9ac:
    // 0x1ad9ac: 0xfe400008  sd          $zero, 0x8($s2)
    ctx->pc = 0x1ad9acu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 0));
label_1ad9b0:
    // 0x1ad9b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ad9b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1ad9b4:
    // 0x1ad9b4: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1ad9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_1ad9b8:
    // 0x1ad9b8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ad9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1ad9bc:
    // 0x1ad9bc: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x1ad9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1ad9c0:
    // 0x1ad9c0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1ad9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1ad9c4:
    // 0x1ad9c4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1ad9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ad9c8:
    // 0x1ad9c8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ad9c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1ad9cc:
    // 0x1ad9cc: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1ad9ccu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_1ad9d0:
    // 0x1ad9d0: 0x8c24b470  lw          $a0, -0x4B90($at)
    ctx->pc = 0x1ad9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294947952)));
label_1ad9d4:
    // 0x1ad9d4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1ad9d4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1ad9d8:
    // 0x1ad9d8: 0xc06aff4  jal         func_1ABFD0
label_1ad9dc:
    if (ctx->pc == 0x1AD9DCu) {
        ctx->pc = 0x1AD9E0u;
        goto label_1ad9e0;
    }
    ctx->pc = 0x1AD9D8u;
    SET_GPR_U32(ctx, 31, 0x1AD9E0u);
    ctx->pc = 0x1ABFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABFD0u, 0x1AD9D8u, 0x1AD9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD9E0u;
label_1ad9e0:
    // 0x1ad9e0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ad9e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1ad9e4:
    // 0x1ad9e4: 0x0  nop
    ctx->pc = 0x1ad9e4u;
    // NOP
    ctx->pc = 0x1ad9e8u;
}
