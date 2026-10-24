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

// Function: entry_002c51c0
// Address: 0x2c51c0 - 0x2c530c
void entry_002c51c0_0x2c51c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c51c0_0x2c51c0");
#endif

    switch (ctx->pc) {
        case 0x2c51ecu: goto label_2c51ec;
        case 0x2c5200u: goto label_2c5200;
        case 0x2c5214u: goto label_2c5214;
        case 0x2c5258u: goto label_2c5258;
        default: break;
    }

    ctx->pc = 0x2c51c0u;

    // 0x2c51c0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c51c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c51c4: 0x90631308  lbu         $v1, 0x1308($v1)
    ctx->pc = 0x2c51c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4872)));
    // 0x2c51c8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2c51c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2c51cc: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x2c51ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x2c51d0: 0x1460004e  bnez        $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x2C51D0u;
    {
        const bool branch_taken_0x2c51d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c51d0) {
            ctx->pc = 0x2C530Cu;
            return;
        }
    }
    ctx->pc = 0x2C51D8u;
    // 0x2c51d8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c51d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c51dc: 0x24440234  addiu       $a0, $v0, 0x234
    ctx->pc = 0x2c51dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 564));
    // 0x2c51e0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2c51e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c51e4: 0xc06b0ec  jal         func_1AC3B0
    ctx->pc = 0x2C51E4u;
    SET_GPR_U32(ctx, 31, 0x2C51ECu);
    ctx->pc = 0x1AC3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC3B0u, 0x2C51E4u, 0x2C51ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C51ECu;
label_2c51ec:
    // 0x2c51ec: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c51ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c51f0: 0x2444023c  addiu       $a0, $v0, 0x23C
    ctx->pc = 0x2c51f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 572));
    // 0x2c51f4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2c51f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c51f8: 0xc06b0ec  jal         func_1AC3B0
    ctx->pc = 0x2C51F8u;
    SET_GPR_U32(ctx, 31, 0x2C5200u);
    ctx->pc = 0x1AC3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC3B0u, 0x2C51F8u, 0x2C5200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5200u;
label_2c5200:
    // 0x2c5200: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c5200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c5204: 0x24440244  addiu       $a0, $v0, 0x244
    ctx->pc = 0x2c5204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 580));
    // 0x2c5208: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2c5208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c520c: 0xc074d44  jal         func_1D3510
    ctx->pc = 0x2C520Cu;
    SET_GPR_U32(ctx, 31, 0x2C5214u);
    ctx->pc = 0x1D3510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3510u, 0x2C520Cu, 0x2C5214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5214u;
label_2c5214:
    // 0x2c5214: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c5214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c5218: 0x8c540244  lw          $s4, 0x244($v0)
    ctx->pc = 0x2c5218u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 580)));
    // 0x2c521c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c521cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c5220: 0x8c550248  lw          $s5, 0x248($v0)
    ctx->pc = 0x2c5220u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 584)));
    // 0x2c5224: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x2c5224u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x2c5228: 0x72a02e28  paddub      $a1, $s5, $zero
    ctx->pc = 0x2c5228u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x2c522c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2c522cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c5230: 0x3c028060  lui         $v0, 0x8060
    ctx->pc = 0x2c5230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32864 << 16));
    // 0x2c5234: 0x34472030  ori         $a3, $v0, 0x2030
    ctx->pc = 0x2c5234u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8240);
    // 0x2c5238: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x2c5238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x2c523c: 0x34488080  ori         $t0, $v0, 0x8080
    ctx->pc = 0x2c523cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x2c5240: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x2c5240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x2c5244: 0x34492030  ori         $t1, $v0, 0x2030
    ctx->pc = 0x2c5244u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8240);
    // 0x2c5248: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x2c5248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x2c524c: 0x344a8080  ori         $t2, $v0, 0x8080
    ctx->pc = 0x2c524cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x2c5250: 0xc074db8  jal         func_1D36E0
    ctx->pc = 0x2C5250u;
    SET_GPR_U32(ctx, 31, 0x2C5258u);
    ctx->pc = 0x1D36E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D36E0u, 0x2C5250u, 0x2C5258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5258u;
label_2c5258:
    // 0x2c5258: 0x8e920008  lw          $s2, 0x8($s4)
    ctx->pc = 0x2c5258u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2c525c: 0x8eb30008  lw          $s3, 0x8($s5)
    ctx->pc = 0x2c525cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x2c5260: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x2c5260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x2c5264: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x2c5264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x2c5268: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2c5268u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2c526c: 0x3c032402  lui         $v1, 0x2402
    ctx->pc = 0x2c526cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9218 << 16));
    // 0x2c5270: 0x34630700  ori         $v1, $v1, 0x700
    ctx->pc = 0x2c5270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1792);
    // 0x2c5274: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x2c5274u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2c5278: 0x26430050  addiu       $v1, $s2, 0x50
    ctx->pc = 0x2c5278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x2c527c: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x2c527cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x2c5280: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x2c5280u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x2c5284: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x2c5284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x2c5288: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2c5288u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2c528c: 0x3c032402  lui         $v1, 0x2402
    ctx->pc = 0x2c528cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9218 << 16));
    // 0x2c5290: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2c5290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2c5294: 0x26650050  addiu       $a1, $s3, 0x50
    ctx->pc = 0x2c5294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    // 0x2c5298: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x2c5298u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x2c529c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x2c529cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2c52a0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2c52a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2c52a4: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x2c52a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x2c52a8: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x2c52a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2c52ac: 0xfe440020  sd          $a0, 0x20($s2)
    ctx->pc = 0x2c52acu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 32), GPR_U64(ctx, 4));
    // 0x2c52b0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x2c52b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2c52b4: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2c52b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2c52b8: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x2c52b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x2c52bc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2c52bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2c52c0: 0xfe630020  sd          $v1, 0x20($s3)
    ctx->pc = 0x2c52c0u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 32), GPR_U64(ctx, 3));
    // 0x2c52c4: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x2c52c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x2c52c8: 0x34633001  ori         $v1, $v1, 0x3001
    ctx->pc = 0x2c52c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12289);
    // 0x2c52cc: 0xfe430030  sd          $v1, 0x30($s2)
    ctx->pc = 0x2c52ccu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 48), GPR_U64(ctx, 3));
    // 0x2c52d0: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x2c52d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x2c52d4: 0x34643001  ori         $a0, $v1, 0x3001
    ctx->pc = 0x2c52d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12289);
    // 0x2c52d8: 0xfe640030  sd          $a0, 0x30($s3)
    ctx->pc = 0x2c52d8u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 48), GPR_U64(ctx, 4));
    // 0x2c52dc: 0x3c03612e  lui         $v1, 0x612E
    ctx->pc = 0x2c52dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24878 << 16));
    // 0x2c52e0: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x2c52e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x2c52e4: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2c52e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2c52e8: 0x34038009  ori         $v1, $zero, 0x8009
    ctx->pc = 0x2c52e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32777);
    // 0x2c52ec: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2c52ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2c52f0: 0xfe430070  sd          $v1, 0x70($s2)
    ctx->pc = 0x2c52f0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 112), GPR_U64(ctx, 3));
    // 0x2c52f4: 0x3c03612e  lui         $v1, 0x612E
    ctx->pc = 0x2c52f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24878 << 16));
    // 0x2c52f8: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x2c52f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x2c52fc: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2c52fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2c5300: 0x34038009  ori         $v1, $zero, 0x8009
    ctx->pc = 0x2c5300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32777);
    // 0x2c5304: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2c5304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2c5308: 0xfe630070  sd          $v1, 0x70($s3)
    ctx->pc = 0x2c5308u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 112), GPR_U64(ctx, 3));
    ctx->pc = 0x2c530cu;
}
