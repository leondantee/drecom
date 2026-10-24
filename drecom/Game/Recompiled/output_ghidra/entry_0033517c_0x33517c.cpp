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

// Function: entry_0033517c
// Address: 0x33517c - 0x3352f0
void entry_0033517c_0x33517c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033517c_0x33517c");
#endif

    switch (ctx->pc) {
        case 0x335254u: goto label_335254;
        case 0x33529cu: goto label_33529c;
        default: break;
    }

    ctx->pc = 0x33517cu;

    // 0x33517c: 0x260229e8  addiu       $v0, $s0, 0x29E8
    ctx->pc = 0x33517cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 10728));
    // 0x335180: 0xafa20104  sw          $v0, 0x104($sp)
    ctx->pc = 0x335180u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 2));
    // 0x335184: 0x26024458  addiu       $v0, $s0, 0x4458
    ctx->pc = 0x335184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 17496));
    // 0x335188: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x335188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x33518c: 0x26024428  addiu       $v0, $s0, 0x4428
    ctx->pc = 0x33518cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 17448));
    // 0x335190: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x335190u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x335194: 0x26044438  addiu       $a0, $s0, 0x4438
    ctx->pc = 0x335194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 17464));
    // 0x335198: 0xafa400b8  sw          $a0, 0xB8($sp)
    ctx->pc = 0x335198u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 4));
    // 0x33519c: 0x26024448  addiu       $v0, $s0, 0x4448
    ctx->pc = 0x33519cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 17480));
    // 0x3351a0: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x3351a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x3351a4: 0x26041de8  addiu       $a0, $s0, 0x1DE8
    ctx->pc = 0x3351a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 7656));
    // 0x3351a8: 0xafa400d0  sw          $a0, 0xD0($sp)
    ctx->pc = 0x3351a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 4));
    // 0x3351ac: 0x26054958  addiu       $a1, $s0, 0x4958
    ctx->pc = 0x3351acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 18776));
    // 0x3351b0: 0xafa500c8  sw          $a1, 0xC8($sp)
    ctx->pc = 0x3351b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 5));
    // 0x3351b4: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x3351b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x3351b8: 0x24423418  addiu       $v0, $v0, 0x3418
    ctx->pc = 0x3351b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13336));
    // 0x3351bc: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x3351bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x3351c0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3351c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x3351c4: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x3351c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x3351c8: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x3351c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x3351cc: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x3351ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
    // 0x3351d0: 0x34821015  ori         $v0, $a0, 0x1015
    ctx->pc = 0x3351d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4117);
    // 0x3351d4: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x3351d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x3351d8: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x3351d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x3351dc: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x3351dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x3351e0: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x3351e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x3351e4: 0xfc820008  sd          $v0, 0x8($a0)
    ctx->pc = 0x3351e4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 2));
    // 0x3351e8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x3351e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x3351ec: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x3351ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3351f0: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x3351f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x3351f4: 0x3c050400  lui         $a1, 0x400
    ctx->pc = 0x3351f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
    // 0x3351f8: 0x34a41009  ori         $a0, $a1, 0x1009
    ctx->pc = 0x3351f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4105);
    // 0x3351fc: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x3351fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x335200: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x335200u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x335204: 0x24030730  addiu       $v1, $zero, 0x730
    ctx->pc = 0x335204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1840));
    // 0x335208: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x335208u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x33520c: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x33520cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x335210: 0x3483000a  ori         $v1, $a0, 0xA
    ctx->pc = 0x335210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)10);
    // 0x335214: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x335214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x335218: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x335218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x33521c: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x33521cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x335220: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x335220u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x335224: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x335224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x335228: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x335228u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x33522c: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x33522cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x335230: 0x34631009  ori         $v1, $v1, 0x1009
    ctx->pc = 0x335230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4105);
    // 0x335234: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x335234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x335238: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x335238u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x33523c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x33523cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x335240: 0xfc400008  sd          $zero, 0x8($v0)
    ctx->pc = 0x335240u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 0));
    // 0x335244: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x335244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x335248: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x335248u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x33524c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x33524Cu;
    SET_GPR_U32(ctx, 31, 0x335254u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x33524Cu, 0x335254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335254u;
label_335254:
    // 0x335254: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x335254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x335258: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x335258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x33525c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x33525cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x335260: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x335260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x335264: 0x3443103f  ori         $v1, $v0, 0x103F
    ctx->pc = 0x335264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4159);
    // 0x335268: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x335268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x33526c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x33526cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x335270: 0x9202683f  lbu         $v0, 0x683F($s0)
    ctx->pc = 0x335270u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26687)));
    // 0x335274: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x335274u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x335278: 0x82035deb  lb          $v1, 0x5DEB($s0)
    ctx->pc = 0x335278u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24043)));
    // 0x33527c: 0x3163c  dsll32      $v0, $v1, 24
    ctx->pc = 0x33527cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 24));
    // 0x335280: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x335280u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x335284: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x335284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x335288: 0x2b880  sll         $s7, $v0, 2
    ctx->pc = 0x335288u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x33528c: 0x2171821  addu        $v1, $s0, $s7
    ctx->pc = 0x33528cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
    // 0x335290: 0x2464663e  addiu       $a0, $v1, 0x663E
    ctx->pc = 0x335290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 26174));
    // 0x335294: 0xc0ce1cc  jal         func_338730
    ctx->pc = 0x335294u;
    SET_GPR_U32(ctx, 31, 0x33529Cu);
    ctx->pc = 0x338730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338730u, 0x335294u, 0x33529Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33529Cu;
label_33529c:
    // 0x33529c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x33529cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3352a0: 0xafa30100  sw          $v1, 0x100($sp)
    ctx->pc = 0x3352a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
    // 0x3352a4: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x3352a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x3352a8: 0x39080  sll         $s2, $v1, 2
    ctx->pc = 0x3352a8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3352ac: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x3352acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x3352b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3352b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3352b4: 0x3c11003b  lui         $s1, 0x3B
    ctx->pc = 0x3352b4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
    // 0x3352b8: 0x26319740  addiu       $s1, $s1, -0x68C0
    ctx->pc = 0x3352b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294940480));
    // 0x3352bc: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x3352bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x3352c0: 0xafa3010c  sw          $v1, 0x10C($sp)
    ctx->pc = 0x3352c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 3));
    // 0x3352c4: 0x8e065dd0  lw          $a2, 0x5DD0($s0)
    ctx->pc = 0x3352c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24016)));
    // 0x3352c8: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x3352c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3352cc: 0x10d1021c  beq         $a2, $s1, . + 4 + (0x21C << 2)
    ctx->pc = 0x3352CCu;
    {
        const bool branch_taken_0x3352cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 17));
        if (branch_taken_0x3352cc) {
            ctx->pc = 0x335B40u;
            return;
        }
    }
    ctx->pc = 0x3352D4u;
    // 0x3352d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3352d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3352d8: 0x10c301b1  beq         $a2, $v1, . + 4 + (0x1B1 << 2)
    ctx->pc = 0x3352D8u;
    {
        const bool branch_taken_0x3352d8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x3352d8) {
            ctx->pc = 0x3359A0u;
            return;
        }
    }
    ctx->pc = 0x3352E0u;
    // 0x3352e0: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3352E0u;
    {
        const bool branch_taken_0x3352e0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3352e0) {
            ctx->pc = 0x3352F0u;
            return;
        }
    }
    ctx->pc = 0x3352E8u;
    // 0x3352e8: 0x10000222  b           . + 4 + (0x222 << 2)
    ctx->pc = 0x3352E8u;
    {
        const bool branch_taken_0x3352e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3352e8) {
            ctx->pc = 0x335B74u;
            return;
        }
    }
    ctx->pc = 0x3352F0u;
}
